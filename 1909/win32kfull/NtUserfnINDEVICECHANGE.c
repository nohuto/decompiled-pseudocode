/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C0105050
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
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
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  _QWORD v32[4]; // [rsp+60h] [rbp-48h] BYREF
  volatile void *Address; // [rsp+C8h] [rbp+20h]

  Address = a4;
  v9 = 0LL;
  memset(v32, 0, 24);
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
  v14 = *a4;
  if ( *a4 < 0xC )
  {
    v11 = 0LL;
    UserSetLastError(87LL, 32778LL, a3, (__int64)a4);
    return v11;
  }
  ProbeForRead(Address, *a4, 1u);
  if ( v14 + 2 < v14 )
  {
    UserSetLastError(87LL, v15, v16, v17);
    return 0LL;
  }
  v18 = Win32AllocPoolWithQuota(v14 + 2, 1986294613LL);
  v9 = (_DWORD *)v18;
  if ( v18 )
  {
    PushW32ThreadLock(v18, v32, (__int64)Win32FreePool);
    memmove(v9, (const void *)Address, v14);
    *((_WORD *)v9 + ((unsigned __int64)v14 >> 1)) = 0;
    if ( *v9 == v14 )
    {
      switch ( v9[1] )
      {
        case 3:
          if ( v14 >= 0x10 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( *((_WORD *)v9 + v30 + 6) );
            if ( (int)v30 + 1 >= (unsigned int)v30 )
            {
              v31 = 2LL * (unsigned int)(v30 + 1);
              if ( v31 <= 0xFFFFFFFF && (int)v31 + 12 >= (unsigned int)v31 && (int)v31 + 12 <= v14 )
                goto LABEL_6;
            }
          }
          v11 = 0LL;
          break;
        case 5:
          if ( v14 >= 0x20 )
          {
            v28 = -1LL;
            do
              ++v28;
            while ( *((_WORD *)v9 + v28 + 14) );
            if ( (int)v28 + 1 >= (unsigned int)v28 )
            {
              v29 = 2LL * (unsigned int)(v28 + 1);
              if ( v29 <= 0xFFFFFFFF && (int)v29 + 28 >= (unsigned int)v29 && (int)v29 + 28 <= v14 )
                goto LABEL_6;
            }
          }
          v11 = 0LL;
          break;
        case 6:
          if ( v14 < 0x38 )
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
            if ( (int)v10 + 52 > v14 )
            {
              v11 = 0LL;
            }
            else
            {
              v24 = (unsigned __int64)v9 + v10 + 52;
              if ( v24 >= (unsigned __int64)(v9 + 13) )
              {
                v25 = -1LL;
                do
                  ++v25;
                while ( *(_WORD *)(v24 + 2 * v25) );
                if ( (int)v25 + 1 >= (unsigned int)v25 )
                {
                  v26 = 2LL * (unsigned int)(v25 + 1);
                  if ( v26 <= 0xFFFFFFFF )
                  {
                    v27 = v26 + 52;
                    if ( (int)v26 + 52 >= (unsigned int)v26
                      && (unsigned int)v10 + v27 >= v27
                      && (unsigned int)v10 + v27 <= v14 )
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
          if ( v14 >= 0x1A0 )
          {
            v22 = -1LL;
            do
              ++v22;
            while ( *((_WORD *)v9 + v22 + 8) );
            if ( (int)v22 + 1 >= (unsigned int)v22 )
            {
              v23 = 2LL * (unsigned int)(v22 + 1);
              if ( v23 <= 0xFFFFFFFF && (int)v23 + 16 >= (unsigned int)v23 && (int)v23 + 16 <= v14 )
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
    UserSetLastError(8LL, v19, v20, v21);
    v11 = 0LL;
  }
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v32, v10, v12);
  return v11;
}
