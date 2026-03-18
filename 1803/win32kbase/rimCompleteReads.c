/*
 * XREFs of rimCompleteReads @ 0x1C00FDEF4
 * Callers:
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00E5EE0 (RimInputTypeToDeviceType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00FE008 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimCompleteReads(__int64 a1)
{
  int v2; // esi
  int v3; // r15d
  __int64 i; // rbx
  int v5; // eax
  __int64 j; // rbx
  int v7; // eax

  if ( *(_DWORD *)(a1 + 76) )
  {
    rimFindPausedDeviceAndCompleteRead();
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 76) & DeviceTypeToRimInputType(v2);
      if ( v3 )
        break;
LABEL_15:
      if ( (unsigned int)++v2 > 2 )
        return 0LL;
    }
    for ( i = *(_QWORD *)(a1 + 408); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_15;
      if ( v2 == 2 )
      {
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2) & *(_DWORD *)(a1 + 76)) == 0 )
          continue;
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
        {
          rimProcessAnyQueuedCompleteFrames(a1, i);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v3) )
      {
        continue;
      }
      v5 = *(_DWORD *)(i + 184);
      if ( (v5 & 0x200) == 0 && (v5 & 0x100) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, i);
    }
  }
  for ( j = *(_QWORD *)(a1 + 408); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
    {
      v7 = *(_DWORD *)(j + 184);
      if ( (v7 & 0x200) == 0 && (v7 & 0x100) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, j);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1, j);
    }
  }
  return 0LL;
}
