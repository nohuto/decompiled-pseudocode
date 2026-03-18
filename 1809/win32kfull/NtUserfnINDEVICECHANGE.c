/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C0121540
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char a6)
{
  unsigned int *v6; // r11
  _DWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  _QWORD v36[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a4;
  v10 = 0LL;
  if ( a3 <= 0x800A && ((_DWORD)a3 == 0x8000 || (_DWORD)a3 == 32772 || (unsigned int)a3 > 0x8006) && !a4 )
  {
    v12 = 0LL;
    UserSetLastError(87LL, 32778LL, a3, 0LL);
    return v12;
  }
  if ( (a3 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !a4 )
  {
    UserSetLastError(87LL, 32778LL, a3, 0LL);
    return 0LL;
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v14 = *v6;
  if ( *v6 < 0xC )
  {
    v12 = 0LL;
    UserSetLastError(87LL, 32778LL, a3, (__int64)a4);
    return v12;
  }
  ProbeForRead(a4, *v6, 1u);
  if ( v14 + 2 < v14 )
  {
    UserSetLastError(87LL, v15, v16, v17);
    return 0LL;
  }
  v18 = Win32AllocPoolWithQuota(v14 + 2, 1986294613LL);
  v10 = (_DWORD *)v18;
  if ( v18 )
  {
    PushW32ThreadLock(v18, v36, (__int64)Win32FreePool);
    memmove(v10, a4, v14);
    *((_WORD *)v10 + ((unsigned __int64)v14 >> 1)) = 0;
    v6 = v10;
    if ( *v10 == v14 )
    {
      switch ( v10[1] )
      {
        case 3:
          if ( v14 >= 0x10 )
          {
            v33 = -1LL;
            do
              ++v33;
            while ( *((_WORD *)v10 + v33 + 6) );
            v11 = 0xFFFFFFFFLL;
            if ( (int)v33 + 1 >= (unsigned int)v33 )
            {
              v34 = 2LL * (unsigned int)(v33 + 1);
              if ( v34 <= 0xFFFFFFFF )
              {
                v35 = v34 + 12;
                if ( 2 * ((int)v33 + 1) + 12 >= (unsigned int)(2 * (v33 + 1)) )
                {
                  v11 = v35;
                  if ( v35 <= v14 )
                    goto LABEL_6;
                }
              }
            }
          }
          v12 = 0LL;
          break;
        case 5:
          if ( v14 >= 0x20 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( *((_WORD *)v10 + v30 + 14) );
            v11 = 0xFFFFFFFFLL;
            if ( (int)v30 + 1 >= (unsigned int)v30 )
            {
              v31 = 2LL * (unsigned int)(v30 + 1);
              if ( v31 <= 0xFFFFFFFF )
              {
                v32 = v31 + 28;
                if ( 2 * ((int)v30 + 1) + 28 >= (unsigned int)(2 * (v30 + 1)) )
                {
                  v11 = v32;
                  if ( v32 <= v14 )
                    goto LABEL_6;
                }
              }
            }
          }
          v12 = 0LL;
          break;
        case 6:
          if ( v14 < 0x38 )
          {
            v12 = 0LL;
          }
          else
          {
            if ( a3 != 32774 )
              goto LABEL_6;
            v22 = (int)v10[12];
            if ( (int)v22 < 0 )
              goto LABEL_6;
            if ( (v22 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v11 = 0xFFFFFFFFLL;
            if ( (int)v22 + 52 > v14 )
            {
              v12 = 0LL;
            }
            else
            {
              v26 = (unsigned __int64)v10 + v22 + 52;
              if ( v26 >= (unsigned __int64)(v10 + 13) )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( *(_WORD *)(v26 + 2 * v27) );
                if ( (int)v27 + 1 >= (unsigned int)v27 )
                {
                  v28 = 2LL * (unsigned int)(v27 + 1);
                  if ( v28 <= 0xFFFFFFFF && (int)v28 + 52 >= (unsigned int)v28 )
                  {
                    v29 = v22 + v28 + 52;
                    if ( (int)v22 + 2 * ((int)v27 + 1) + 52 >= (unsigned int)(2 * (v27 + 1) + 52) )
                    {
                      v11 = v29;
                      if ( v29 <= v14 )
                      {
LABEL_6:
                        v12 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, unsigned int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
                                a1,
                                a2,
                                a3,
                                v6,
                                a5);
                        break;
                      }
                    }
                  }
                }
              }
              v12 = 0LL;
            }
          }
          break;
        case 7:
          if ( v14 >= 0x1A0 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( *((_WORD *)v10 + v23 + 8) );
            v11 = 0xFFFFFFFFLL;
            if ( (int)v23 + 1 >= (unsigned int)v23 )
            {
              v24 = 2LL * (unsigned int)(v23 + 1);
              if ( v24 <= 0xFFFFFFFF )
              {
                v25 = v24 + 16;
                if ( 2 * ((int)v23 + 1) + 16 >= (unsigned int)(2 * (v23 + 1)) )
                {
                  v11 = v25;
                  if ( v25 <= v14 )
                    goto LABEL_6;
                }
              }
            }
          }
          v12 = 0LL;
          break;
        default:
          goto LABEL_6;
      }
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8LL, v19, v20, v21);
    v12 = 0LL;
  }
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v36, v11);
  return v12;
}
