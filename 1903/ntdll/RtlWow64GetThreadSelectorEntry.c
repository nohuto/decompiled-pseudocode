/*
 * XREFs of RtlWow64GetThreadSelectorEntry @ 0x1800DB390
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlWow64GetThreadSelectorEntry(void *a1, __int64 a2, int a3, _DWORD *a4)
{
  NTSTATUS InformationThread; // r8d
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  _BYTE ThreadInformation[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]

  if ( a3 != 12 )
    return 3221225476LL;
  InformationThread = 0;
  v8 = *(_DWORD *)a2 & 0xFFFFFFFC;
  if ( v8 )
  {
    if ( v8 == 32 )
    {
      *(_BYTE *)(a2 + 11) = 0;
      *(_BYTE *)(a2 + 8) = 0;
      v11 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1B00;
    }
    else
    {
      if ( v8 != 40 )
      {
        if ( v8 == 80 )
        {
          InformationThread = ZwQueryInformationThread(a1, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          if ( InformationThread >= 0 )
          {
            v9 = v14 + 0x2000;
            *(_WORD *)(a2 + 4) = 4095;
            *(_WORD *)(a2 + 6) = v9;
            *(_BYTE *)(a2 + 11) = HIBYTE(v9);
            *(_BYTE *)(a2 + 8) = BYTE2(v9);
            v10 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1300;
            *(_DWORD *)(a2 + 8) = v10;
            v10 |= 0x6000u;
            *(_DWORD *)(a2 + 8) = v10;
            v10 |= 0x8000u;
            *(_DWORD *)(a2 + 8) = v10;
            v10 &= 0xFFF0FFFF;
            *(_DWORD *)(a2 + 8) = v10;
            v10 &= ~0x100000u;
            *(_DWORD *)(a2 + 8) = v10;
            v10 &= ~0x200000u;
            *(_DWORD *)(a2 + 8) = v10;
            v10 |= 0x400000u;
            *(_DWORD *)(a2 + 8) = v10;
            *(_DWORD *)(a2 + 8) = v10 & 0xFF7FFFFF;
          }
        }
        else
        {
          InformationThread = -1073741823;
        }
        goto LABEL_14;
      }
      *(_BYTE *)(a2 + 11) = 0;
      *(_BYTE *)(a2 + 8) = 0;
      v11 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1300;
    }
    *(_DWORD *)(a2 + 4) = 0xFFFF;
    *(_DWORD *)(a2 + 8) = v11;
    v12 = v11 | 0x6000;
    *(_DWORD *)(a2 + 8) = v12;
    v12 |= 0x8000u;
    *(_DWORD *)(a2 + 8) = v12;
    v12 |= 0xF0000u;
    *(_DWORD *)(a2 + 8) = v12;
    v12 &= ~0x100000u;
    *(_DWORD *)(a2 + 8) = v12;
    v12 &= ~0x200000u;
    *(_DWORD *)(a2 + 8) = v12;
    v12 |= 0x400000u;
    *(_DWORD *)(a2 + 8) = v12;
    *(_DWORD *)(a2 + 8) = v12 | 0x800000;
  }
  else
  {
    *(_QWORD *)(a2 + 4) = 0LL;
  }
LABEL_14:
  if ( InformationThread >= 0 )
  {
    if ( a4 )
      *a4 = 8;
  }
  return (unsigned int)InformationThread;
}
