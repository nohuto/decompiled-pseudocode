/*
 * XREFs of ndisGetAdapterHardwareInfo @ 0x1C00B9C54
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C00B5800 (ndisDeviceControlHandler.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall ndisGetAdapterHardwareInfo(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v6; // rcx
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  int v16; // edx
  __int64 v17; // r8
  unsigned int i; // r12d
  int v19; // ecx

  v3 = 0;
  *a3 = -1073741823;
  v6 = a2[23];
  v7 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 48) + 24LL) + 24LL) )
  {
    v8 = *(_DWORD *)(v6 + 8);
    v9 = 668;
    v10 = (_DWORD *)a2[3];
    if ( v8 < 0x29C )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *a3 = 0;
      memset(v10, 0, 0x29CuLL);
      *v10 = 43778432;
      *((_BYTE *)v10 + 12) = *(_BYTE *)(a1 + 32);
      *((_BYTE *)v10 + 13) = *(_BYTE *)(a1 + 33);
      v11 = 668;
      v12 = *(_QWORD *)(a1 + 784);
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 192) )
        {
          v11 = 16 * *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL) + 668;
          if ( v8 >= v11 )
          {
            v7 = v10 + 167;
            v10[15] = 668;
          }
        }
      }
      v10[2] = v11;
      if ( v7 )
        v9 = v11;
      if ( v12 )
      {
        v16 = v10[1];
        *(_OWORD *)(v10 + 6) = *(_OWORD *)(a1 + 3648);
        *((_QWORD *)v10 + 5) = *(_QWORD *)(a1 + 3664);
        *((_QWORD *)v10 + 6) = *(_QWORD *)(a1 + 3672);
        v10[14] = *(_DWORD *)(a1 + 3680);
        if ( *(_BYTE *)(v12 + 192) && (v16 |= 4u, v10[1] = v16, *(_BYTE *)(v12 + 193)) )
        {
          v10[5] = *(_DWORD *)(*(_QWORD *)(v12 + 120) + 4LL);
          v10[1] = v16 | 8;
          if ( v7 )
          {
            v17 = *(_QWORD *)(v12 + 120);
            for ( i = 0; i < *(_DWORD *)(v17 + 4); ++i )
            {
              IoGetAffinityInterrupt(*(PKINTERRUPT *)(v17 + 48LL * i + 24), (PGROUP_AFFINITY)&v7[4 * i]);
              v17 = *(_QWORD *)(v12 + 120);
            }
          }
          if ( *(_BYTE *)(a1 + 3672) == 17 )
          {
            v19 = v10[1] | 0x10;
            v10[1] = v19;
            v10[4] = (*(_WORD *)(a1 + 3674) & 0x7FF) + 1;
            if ( *(__int16 *)(a1 + 3674) < 0 )
              v10[1] = v19 | 0x20;
          }
        }
        else
        {
          v10[1] = v16 | 2;
        }
      }
      else
      {
        v13 = v10[1];
        if ( *(_QWORD *)(a1 + 112) )
          v14 = v13 | 2;
        else
          v14 = v13 | 1;
        v10[1] = v14;
      }
      *((_BYTE *)v10 + 84) = (*(_DWORD *)(a1 + 120) & 0x10) != 0;
      a2[7] = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
