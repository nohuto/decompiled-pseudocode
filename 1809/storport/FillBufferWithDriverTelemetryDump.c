/*
 * XREFs of FillBufferWithDriverTelemetryDump @ 0x1C0051CA8
 * Callers:
 *     RaidStandardSecondaryDumpCallback @ 0x1C0051F80 (RaidStandardSecondaryDumpCallback.c)
 * Callees:
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall FillBufferWithDriverTelemetryDump(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  char *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  char *v12; // rax
  _DWORD *v13; // r9
  unsigned int v14; // r10d
  __int64 v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // r11d
  unsigned int v18; // r12d
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  _DWORD *v24; // rcx
  __int64 v25; // rax
  __int64 result; // rax

  v3 = BootDriveExtension;
  if ( !a2 || (v6 = *a3) == 0 )
  {
    *a3 = 7776;
    return 3221225507LL;
  }
  if ( v6 >= 0xD8 )
  {
    v7 = 7776;
    if ( v6 < 0x1E60 )
      v7 = *a3;
    memset(a2, 0, v7);
    v8 = 96;
    *a2 = 1347703620;
    v9 = (char *)(a2 + 4);
    a2[1] = 96;
    a2[2] = v7;
    v10 = 16LL;
    do
    {
      if ( v10 == -2147483630 )
        break;
      v11 = v9["storport.sys" - (char *)(a2 + 4)];
      if ( !v11 )
        break;
      *v9++ = v11;
      --v10;
    }
    while ( v10 );
    v12 = v9 - 1;
    v13 = a2 + 9;
    if ( v10 )
      v12 = v9;
    v14 = 0;
    *v12 = 0;
    a2[8] = 0;
    v15 = *(_QWORD *)(v3 + 24);
    v16 = *(_DWORD *)(v15 + 5124);
    v17 = *(_DWORD *)(v15 + 5120) % v16;
    v18 = (v17 + 1) % v16;
    if ( v17 == v18 )
    {
LABEL_35:
      a2[8] = v14;
      result = 0LL;
      *a3 = v7;
      return result;
    }
    while ( 1 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 5128LL) + 48LL * v17;
      v20 = (unsigned __int64)*(unsigned int *)(v19 + 32) >> 24;
      *((_BYTE *)v13 + 16) = HIBYTE(*(_DWORD *)(v19 + 32));
      if ( !(_BYTE)v20 )
        break;
      if ( (unsigned __int8)v20 <= 0x22u )
      {
        v21 = 0x5001D0180LL;
        if ( _bittest64(&v21, v20) )
          break;
      }
LABEL_31:
      if ( v17 )
        v17 = (v17 - 1) % v16;
      else
        v17 = v16 - 1;
      if ( v17 == v18 )
        goto LABEL_35;
    }
    if ( *(_DWORD *)v19 == 1 )
    {
      if ( (unsigned __int64)v8 + 60 >= v7 )
        goto LABEL_30;
      *(_BYTE *)v13 = BYTE2(*(_DWORD *)(v19 + 32));
      v13[14] = *(_DWORD *)(v19 + 24);
      v13[13] = (unsigned __int8)*(_DWORD *)(v19 + 32);
      v22 = (unsigned __int64)*(unsigned int *)(v19 + 32) >> 8;
      *((_QWORD *)v13 + 4) = 0LL;
      v13[12] = (unsigned __int8)v22;
      *((_QWORD *)v13 + 5) = *(_QWORD *)(v19 + 40);
    }
    else
    {
      if ( *(_DWORD *)v19 )
        goto LABEL_30;
      v23 = 0;
      v24 = v13 - 15;
      if ( v14 )
      {
        while ( *(_DWORD *)(v19 + 24) != v24[14] )
        {
          ++v23;
          v24 -= 15;
          if ( v23 >= v14 )
            goto LABEL_26;
        }
        *((_QWORD *)v24 + 4) = *(_QWORD *)(v19 + 40);
LABEL_26:
        if ( v23 < v14 )
          goto LABEL_30;
      }
      if ( (unsigned __int64)v8 + 60 >= v7 )
      {
LABEL_30:
        if ( v14 >= 0x80 )
          goto LABEL_35;
        goto LABEL_31;
      }
      *(_BYTE *)v13 = BYTE2(*(_DWORD *)(v19 + 32));
      *((_BYTE *)v13 + 16) = HIBYTE(*(_DWORD *)(v19 + 32));
      v13[14] = *(_DWORD *)(v19 + 24);
      v13[13] = (unsigned __int8)*(_DWORD *)(v19 + 32);
      v13[12] = (unsigned __int8)BYTE1(*(_DWORD *)(v19 + 32));
      v25 = *(_QWORD *)(v19 + 40);
      *((_QWORD *)v13 + 5) = 0LL;
      *((_QWORD *)v13 + 4) = v25;
    }
    v13 += 15;
    ++v14;
    v8 += 60;
    goto LABEL_30;
  }
  *a3 = 216;
  return 3221225507LL;
}
