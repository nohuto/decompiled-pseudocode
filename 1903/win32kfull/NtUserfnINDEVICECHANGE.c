/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C0129DF0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  _QWORD v33[4]; // [rsp+60h] [rbp-48h] BYREF
  volatile void *Address; // [rsp+C8h] [rbp+20h]

  Address = a4;
  v9 = 0LL;
  memset(v33, 0, 24);
  if ( a3 <= 0x800A && ((_DWORD)a3 == 0x8000 || (_DWORD)a3 == 32772 || (unsigned int)a3 > 0x8006) && !a4 )
  {
    v11 = 0LL;
    UserSetLastError(87LL, 32778LL, a3, 0LL);
    return v11;
  }
  if ( (a3 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !a4 )
  {
    UserSetLastError(87LL, 32778LL, a3, 0LL);
    return 0LL;
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  v15 = *a4;
  if ( *a4 < 0xC )
  {
    v11 = 0LL;
    UserSetLastError(87LL, 32778LL, a3, (__int64)a4);
    return v11;
  }
  ProbeForRead(Address, *a4, 1u);
  if ( v15 + 2 < v15 )
  {
    UserSetLastError(87LL, v16, v17, v18);
    return 0LL;
  }
  v19 = Win32AllocPoolWithQuota(v15 + 2, 1986294613LL);
  v9 = (_DWORD *)v19;
  if ( v19 )
  {
    PushW32ThreadLock(v19, v33, (__int64)Win32FreePool, v22);
    memmove(v9, (const void *)Address, v15);
    *((_WORD *)v9 + ((unsigned __int64)v15 >> 1)) = 0;
    v13 = (__int64)v9;
    if ( *v9 == v15 )
    {
      switch ( v9[1] )
      {
        case 3:
          if ( v15 >= 0x10 )
          {
            v31 = -1LL;
            do
              ++v31;
            while ( *((_WORD *)v9 + v31 + 6) );
            if ( (int)v31 + 1 >= (unsigned int)v31 )
            {
              v32 = 2LL * (unsigned int)(v31 + 1);
              if ( v32 <= 0xFFFFFFFF && (int)v32 + 12 >= (unsigned int)v32 && (int)v32 + 12 <= v15 )
                goto LABEL_6;
            }
          }
          v11 = 0LL;
          break;
        case 5:
          if ( v15 >= 0x20 )
          {
            v29 = -1LL;
            do
              ++v29;
            while ( *((_WORD *)v9 + v29 + 14) );
            if ( (int)v29 + 1 >= (unsigned int)v29 )
            {
              v30 = 2LL * (unsigned int)(v29 + 1);
              if ( v30 <= 0xFFFFFFFF && (int)v30 + 28 >= (unsigned int)v30 && (int)v30 + 28 <= v15 )
                goto LABEL_6;
            }
          }
          v11 = 0LL;
          break;
        case 6:
          if ( v15 < 0x38 )
          {
            v11 = 0LL;
          }
          else
          {
            if ( a3 != 32774 )
              goto LABEL_6;
            v10 = (int)v9[12];
            if ( (int)v10 < 0 )
              goto LABEL_6;
            if ( (v10 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v10 + 52 > v15 )
            {
              v11 = 0LL;
            }
            else
            {
              v25 = (unsigned __int64)v9 + v10 + 52;
              if ( v25 >= (unsigned __int64)(v9 + 13) )
              {
                v26 = -1LL;
                do
                  ++v26;
                while ( *(_WORD *)(v25 + 2 * v26) );
                if ( (int)v26 + 1 >= (unsigned int)v26 )
                {
                  v27 = 2LL * (unsigned int)(v26 + 1);
                  if ( v27 <= 0xFFFFFFFF )
                  {
                    v28 = v27 + 52;
                    if ( (int)v27 + 52 >= (unsigned int)v27
                      && (unsigned int)v10 + v28 >= v28
                      && (unsigned int)v10 + v28 <= v15 )
                    {
LABEL_6:
                      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
                              a1,
                              a2,
                              a3);
                      break;
                    }
                  }
                }
              }
              v11 = 0LL;
            }
          }
          break;
        case 7:
          if ( v15 >= 0x1A0 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( *((_WORD *)v9 + v23 + 8) );
            if ( (int)v23 + 1 >= (unsigned int)v23 )
            {
              v24 = 2LL * (unsigned int)(v23 + 1);
              if ( v24 <= 0xFFFFFFFF && (int)v24 + 16 >= (unsigned int)v24 && (int)v24 + 16 <= v15 )
                goto LABEL_6;
            }
          }
          v11 = 0LL;
          break;
        default:
          goto LABEL_6;
      }
    }
    else
    {
      v11 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8LL, v20, v21, v22);
    v11 = 0LL;
  }
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v33, v10, v12, v13);
  return v11;
}
