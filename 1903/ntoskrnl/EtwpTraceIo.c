/*
 * XREFs of EtwpTraceIo @ 0x1401574C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     IoGetActivityIdIrp @ 0x1400FE720 (IoGetActivityIdIrp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpDiskProvTraceDisk @ 0x14032E7D4 (EtwpDiskProvTraceDisk.c)
 */

__int64 __fastcall EtwpTraceIo(int a1, unsigned int a2, __int64 a3)
{
  char *v3; // r14
  __int64 v7; // rdi
  __int64 ThreadServerSilo; // r11
  char v9; // dl
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int16 v12; // r10
  int v13; // eax
  int v14; // esi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r9d
  __int64 *v18; // r8
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int16 v21; // si
  __int64 result; // rax
  int v23; // eax
  __int128 *v24; // r9
  __int128 v25; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v26[7]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v27[4]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v29; // [rsp+A8h] [rbp+37h]

  v3 = *(char **)(a3 + 184);
  v28 = 0LL;
  v29 = 0LL;
  memset(v27, 0, sizeof(v27));
  memset(v26, 0, sizeof(v26));
  v7 = *(_QWORD *)(a3 + 152);
  if ( v7 )
    ThreadServerSilo = PsGetThreadServerSilo(*(_QWORD *)(a3 + 152));
  else
    ThreadServerSilo = 0LL;
  v9 = *v3;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v3 != 9 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    v26[0] = __PAIR64__(v10, a2);
    v26[4] = a3;
    v26[1] = v11;
    v12 = (v9 != 3) + 266;
    v26[2] = *((_QWORD *)v3 + 3);
    v26[5] = *((_QWORD *)v3 + 1);
    if ( v7 )
      v13 = *(_DWORD *)(v7 + 1616);
    else
      v13 = -1;
    LODWORD(v26[6]) = v13;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      HIDWORD(v26[1]) = 1;
    }
    else
    {
      v14 = a1 & 0xFFFFFF;
      if ( v14 == 5460546 || v14 == 5467492 )
        HIDWORD(v26[1]) = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v19 = *(_QWORD *)(a3 + 24);
      if ( v19 )
      {
        v15 = *(_QWORD *)(v19 + 192);
        if ( v15 )
          goto LABEL_19;
        v15 = *(_QWORD *)(*(_QWORD *)(v19 + 184) + 48LL);
LABEL_15:
        if ( v15 )
          goto LABEL_19;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a3 + 192);
      if ( v15 )
      {
LABEL_19:
        v26[3] = *(_QWORD *)(v15 + 24);
        goto LABEL_20;
      }
      v16 = *(unsigned __int8 *)(a3 + 67);
      v17 = *(char *)(a3 + 66);
      if ( v16 <= v17 )
      {
        v18 = (__int64 *)(v3 + 48);
        while ( 1 )
        {
          v15 = *v18;
          if ( *v18 )
            goto LABEL_19;
          LOBYTE(v16) = v16 + 1;
          v18 += 9;
          if ( (unsigned __int8)v16 > v17 )
            goto LABEL_15;
        }
      }
    }
    v26[3] = 0LL;
LABEL_20:
    v20 = v26;
    LODWORD(v29) = 52;
    v21 = v12;
    goto LABEL_21;
  }
  v27[0] = __PAIR64__(v10, a2);
  v21 = 270;
  v27[1] = *((_QWORD *)v3 + 1);
  v27[2] = a3;
  if ( v7 )
    v23 = *(_DWORD *)(v7 + 1616);
  else
    v23 = -1;
  LODWORD(v27[3]) = v23;
  v20 = v27;
  LODWORD(v29) = 28;
LABEL_21:
  HIDWORD(v29) = 0;
  v28 = v20;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v28, 1, 0x100u, v21, 4200451);
  result = EtwpHostSiloState + 4516;
  if ( EtwpHostSiloState != -4516 )
  {
    result = *(unsigned int *)result;
    if ( (result & 0x100) != 0 )
    {
      v25 = 0uLL;
      if ( (unsigned int)IoGetActivityIdIrp(a3, &v25) )
        v24 = 0LL;
      else
        v24 = &v25;
      return EtwpDiskProvTraceDisk(v21, &v28, v7, v24);
    }
  }
  return result;
}
