/*
 * XREFs of NtGdiGetUFIPathname @ 0x1C027F830
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     GreGetUFIPathname @ 0x1C02486EC (GreGetUFIPathname.c)
 */

__int64 __fastcall NtGdiGetUFIPathname(
        ULONG64 a1,
        _DWORD *a2,
        char *a3,
        ULONG64 a4,
        char a5,
        ULONG64 a6,
        ULONG64 a7,
        volatile void *a8,
        ULONG64 a9,
        ULONG64 a10)
{
  _QWORD *v12; // rdx
  _DWORD *v13; // r13
  _DWORD *v14; // r14
  char *v15; // rsi
  bool v16; // cf
  unsigned int UFIPathname; // edi
  size_t v18; // r8
  _DWORD *v19; // rdx
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  int v23[2]; // [rsp+60h] [rbp-2D8h] BYREF
  int v24; // [rsp+68h] [rbp-2D0h] BYREF
  ULONG64 v25; // [rsp+70h] [rbp-2C8h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-2C0h] BYREF
  __int64 v27; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-2B0h] BYREF
  char *v29; // [rsp+90h] [rbp-2A8h]
  ULONG64 v30; // [rsp+98h] [rbp-2A0h]
  int v31[2]; // [rsp+A0h] [rbp-298h] BYREF
  ULONG64 v32; // [rsp+A8h] [rbp-290h]
  ULONG64 v33; // [rsp+B0h] [rbp-288h]
  ULONG64 v34; // [rsp+B8h] [rbp-280h]
  ULONG64 v35; // [rsp+C0h] [rbp-278h]
  _BYTE v36[528]; // [rsp+E0h] [rbp-258h] BYREF

  v32 = a4;
  v12 = (_QWORD *)a1;
  v28 = (__int64)a2;
  *(_QWORD *)v23 = a3;
  v33 = a4;
  v13 = (_DWORD *)a6;
  v34 = a6;
  Address = a8;
  v14 = (_DWORD *)a9;
  v35 = a9;
  v30 = a9;
  v25 = a9;
  v15 = 0LL;
  v29 = 0LL;
  LODWORD(v27) = 0;
  v24 = 0;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v31 = *v12;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
  v16 = v25 != 0;
  v25 = -(__int64)v25;
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)v31,
                  v23,
                  0LL,
                  0,
                  &v28,
                  a5,
                  (int *)&Address,
                  &v27,
                  Address,
                  (_DWORD *)((unsigned __int64)&v25 & -(__int64)v16),
                  (unsigned int *)((unsigned __int64)&v24 & -(__int64)(a10 != 0)));
  if ( UFIPathname )
  {
    if ( v23[0] > 0x104u )
    {
      if ( v23[0] <= 0x1388000u )
      {
        v15 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * v23[0]));
        v29 = v15;
      }
      UFIPathname &= -(v15 != 0LL);
    }
    else
    {
      v15 = v36;
      v29 = v36;
    }
  }
  if ( UFIPathname && !(_DWORD)Address && v15 )
  {
    v16 = v30 != 0;
    v30 = -(__int64)v30;
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)v31,
                    0LL,
                    v15,
                    v23[0],
                    &v28,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)((unsigned __int64)&v25 & -(__int64)v16),
                    (unsigned int *)((unsigned __int64)&v24 & -(__int64)(a10 != 0)));
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
  GreReleaseSemaphoreInternal(ghsemPublicPFT);
  if ( UFIPathname )
  {
    if ( v23[0] > 0x30Cu )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_DWORD *)MmUserProbeAddress;
        *a2 = v23[0];
      }
      if ( a3 )
      {
        v18 = 2LL * (unsigned int)v23[0];
        if ( (unsigned __int64)&a3[v18] > MmUserProbeAddress || &a3[v18] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v15, v18);
      }
      v19 = (_DWORD *)v32;
      if ( v32 )
      {
        if ( v32 >= MmUserProbeAddress )
          v19 = (_DWORD *)MmUserProbeAddress;
        *v19 = v28;
      }
      if ( (_DWORD)Address )
      {
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v13 = (_DWORD *)MmUserProbeAddress;
          *v13 = (_DWORD)Address;
        }
        v20 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v20 = (_DWORD *)MmUserProbeAddress;
          *v20 = v27;
        }
      }
      if ( a9 )
      {
        if ( a9 >= MmUserProbeAddress )
          v14 = (_DWORD *)MmUserProbeAddress;
        *v14 = v25;
      }
      v21 = (_DWORD *)a10;
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v21 = (_DWORD *)MmUserProbeAddress;
        *v21 = v24;
      }
    }
  }
  if ( v15 && v15 != v36 )
    FreeTmpBuffer(v15);
  return UFIPathname;
}
