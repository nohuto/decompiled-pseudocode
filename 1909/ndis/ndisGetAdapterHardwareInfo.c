/*
 * XREFs of ndisGetAdapterHardwareInfo @ 0x1C009509C
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisGetAdapterHardwareInfo(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rbp
  int v13; // edx
  __int64 v14; // r8
  unsigned int i; // r12d
  int v16; // ecx
  int v17; // eax
  int v18; // eax

  v3 = 0;
  *a3 = -1073741823;
  v6 = a2[23];
  v7 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 24LL) + 24LL) )
  {
    v8 = *(_DWORD *)(v6 + 8);
    v9 = 668;
    v10 = a2[3];
    if ( v8 >= 0x29C )
    {
      *a3 = 0;
      memset((void *)(v10 + 4), 0, 0x298uLL);
      *(_DWORD *)v10 = 43778432;
      *(_BYTE *)(v10 + 12) = *(_BYTE *)(a1 + 32);
      *(_BYTE *)(v10 + 13) = *(_BYTE *)(a1 + 33);
      v11 = 668;
      v12 = *(_QWORD *)(a1 + 784);
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 192) )
        {
          v11 = 16 * *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL) + 668;
          if ( v8 >= v11 )
          {
            v7 = v10 + 668;
            *(_DWORD *)(v10 + 60) = 668;
          }
        }
      }
      *(_DWORD *)(v10 + 8) = v11;
      if ( v7 )
        v9 = v11;
      if ( v12 )
      {
        v13 = *(_DWORD *)(v10 + 4);
        *(_OWORD *)(v10 + 24) = *(_OWORD *)(a1 + 3624);
        *(_QWORD *)(v10 + 40) = *(_QWORD *)(a1 + 3640);
        *(_QWORD *)(v10 + 48) = *(_QWORD *)(a1 + 3648);
        *(_DWORD *)(v10 + 56) = *(_DWORD *)(a1 + 3656);
        if ( *(_BYTE *)(v12 + 192) && (v13 |= 4u, *(_DWORD *)(v10 + 4) = v13, *(_BYTE *)(v12 + 193)) )
        {
          *(_DWORD *)(v10 + 20) = *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL);
          *(_DWORD *)(v10 + 4) = v13 | 8;
          if ( v7 )
          {
            v14 = *(_QWORD *)(v12 + 120);
            for ( i = 0; i < *(_DWORD *)(v14 + 4); ++i )
            {
              IoGetAffinityInterrupt(*(PKINTERRUPT *)(v14 + 48LL * i + 24), (PGROUP_AFFINITY)(v7 + 16LL * i));
              v14 = *(_QWORD *)(v12 + 120);
            }
          }
          if ( *(_BYTE *)(a1 + 3648) == 17 )
          {
            v16 = *(_DWORD *)(v10 + 4) | 0x10;
            *(_DWORD *)(v10 + 4) = v16;
            *(_DWORD *)(v10 + 16) = (*(_WORD *)(a1 + 3650) & 0x7FF) + 1;
            if ( *(__int16 *)(a1 + 3650) < 0 )
              *(_DWORD *)(v10 + 4) = v16 | 0x20;
          }
        }
        else
        {
          *(_DWORD *)(v10 + 4) = v13 | 2;
        }
      }
      else
      {
        v17 = *(_DWORD *)(v10 + 4);
        if ( *(_QWORD *)(a1 + 112) )
          v18 = v17 | 2;
        else
          v18 = v17 | 1;
        *(_DWORD *)(v10 + 4) = v18;
      }
      *(_BYTE *)(v10 + 84) = (*(_DWORD *)(a1 + 120) & 0x10) != 0;
      a2[7] = v9;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
