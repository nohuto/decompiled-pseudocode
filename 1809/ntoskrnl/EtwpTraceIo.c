/*
 * XREFs of EtwpTraceIo @ 0x1401830E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     IoGetActivityIdIrp @ 0x140107D00 (IoGetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpDiskProvTraceDisk @ 0x140310AC4 (EtwpDiskProvTraceDisk.c)
 */

__int64 __fastcall EtwpTraceIo(int a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  char *v5; // r14
  __int64 ThreadServerSilo; // r11
  char v9; // dl
  int v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // r10
  __int64 v13; // rax
  int v14; // eax
  int v15; // esi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // r9d
  __int64 *v19; // r8
  _DWORD *v20; // rax
  unsigned __int16 v21; // si
  __int64 result; // rax
  __int64 v23; // rax
  int v24; // eax
  __int128 *v25; // r9
  __int128 v26; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v27[3]; // [rsp+48h] [rbp-29h] BYREF
  int v28; // [rsp+54h] [rbp-1Dh]
  __int64 v29; // [rsp+58h] [rbp-19h]
  __int64 v30; // [rsp+60h] [rbp-11h]
  __int64 v31; // [rsp+68h] [rbp-9h]
  __int64 v32; // [rsp+70h] [rbp-1h]
  int v33; // [rsp+78h] [rbp+7h]
  _DWORD v34[2]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+88h] [rbp+17h]
  __int64 v36; // [rsp+90h] [rbp+1Fh]
  int v37; // [rsp+98h] [rbp+27h]
  _DWORD *v38; // [rsp+A0h] [rbp+2Fh] BYREF
  int v39; // [rsp+A8h] [rbp+37h]
  int v40; // [rsp+ACh] [rbp+3Bh]

  v3 = *(_QWORD *)(a3 + 152);
  v5 = *(char **)(a3 + 184);
  if ( v3 )
    ThreadServerSilo = PsGetThreadServerSilo(v3);
  else
    ThreadServerSilo = 0LL;
  v9 = *v5;
  v10 = *(_DWORD *)(a3 + 16);
  if ( *v5 != 9 )
  {
    v11 = *(_DWORD *)(a3 + 56);
    v27[0] = a2;
    v27[1] = v10;
    v31 = a3;
    v27[2] = v11;
    v12 = (v9 != 3) + 266;
    v29 = *((_QWORD *)v5 + 3);
    v13 = *((_QWORD *)v5 + 1);
    v28 = 0;
    v32 = v13;
    if ( v3 )
      v14 = *(_DWORD *)(v3 + 1600);
    else
      v14 = -1;
    v33 = v14;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v28 = 1;
    }
    else
    {
      v15 = a1 & 0xFFFFFF;
      if ( v15 == 5460546 || v15 == 5467492 )
        v28 = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a3 + 24);
      if ( v23 )
      {
        v16 = *(_QWORD *)(v23 + 192);
        if ( v16 )
          goto LABEL_25;
        v16 = *(_QWORD *)(*(_QWORD *)(v23 + 184) + 48LL);
LABEL_15:
        if ( v16 )
          goto LABEL_25;
      }
    }
    else
    {
      v16 = *(_QWORD *)(a3 + 192);
      if ( v16 )
      {
LABEL_25:
        v30 = *(_QWORD *)(v16 + 24);
        goto LABEL_17;
      }
      v17 = *(unsigned __int8 *)(a3 + 67);
      v18 = *(char *)(a3 + 66);
      if ( v17 <= v18 )
      {
        v19 = (__int64 *)(v5 + 48);
        while ( 1 )
        {
          v16 = *v19;
          if ( *v19 )
            goto LABEL_25;
          LOBYTE(v17) = v17 + 1;
          v19 += 9;
          if ( (unsigned __int8)v17 > v18 )
            goto LABEL_15;
        }
      }
    }
    v30 = 0LL;
LABEL_17:
    v20 = v27;
    v39 = 52;
    v21 = v12;
    goto LABEL_18;
  }
  v34[0] = a2;
  v21 = 270;
  v34[1] = v10;
  v35 = *((_QWORD *)v5 + 1);
  v36 = a3;
  if ( v3 )
    v24 = *(_DWORD *)(v3 + 1600);
  else
    v24 = -1;
  v37 = v24;
  v20 = v34;
  v39 = 28;
LABEL_18:
  v40 = 0;
  v38 = v20;
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v38, 1, 0x100u, v21, 4200451);
  result = EtwpHostSiloState + 4516;
  if ( EtwpHostSiloState != -4516 )
  {
    result = *(unsigned int *)result;
    if ( (result & 0x100) != 0 )
    {
      v26 = 0uLL;
      if ( (unsigned int)IoGetActivityIdIrp(a3, &v26) )
        v25 = 0LL;
      else
        v25 = &v26;
      return EtwpDiskProvTraceDisk(v21, &v38, v3, v25);
    }
  }
  return result;
}
