/*
 * XREFs of NtUserfnINDEVICECHANGE @ 0x1C00627B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserfnINDEVICECHANGE(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  _QWORD v23[4]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a4;
  v6 = 0LL;
  if ( a3 <= 0x800A && ((_DWORD)a3 == 0x8000 || (_DWORD)a3 == 32772 || (unsigned int)a3 > 0x8006) && !a4 )
  {
LABEL_69:
    v7 = 0LL;
    UserSetLastError(87LL, 32778LL);
    return v7;
  }
  if ( (a3 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !a4 )
  {
    UserSetLastError(87LL, 32778LL);
    return 0LL;
  }
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v9 = *v4;
  if ( *v4 < 0xC )
    goto LABEL_69;
  ProbeForRead(a4, *v4, 1u);
  if ( v9 + 2 < v9 )
  {
    UserSetLastError(87LL, v10);
    return 0LL;
  }
  v11 = Win32AllocPoolWithQuota(v9 + 2, 1986294613LL);
  v6 = (_DWORD *)v11;
  if ( v11 )
  {
    PushW32ThreadLock(v11, v23, (__int64)Win32FreePool);
    memmove(v6, a4, v9);
    *((_WORD *)v6 + ((unsigned __int64)v9 >> 1)) = 0;
    if ( *v6 == v9 )
    {
      switch ( v6[1] )
      {
        case 3:
          if ( v9 >= 0x10 )
          {
            v21 = -1LL;
            do
              ++v21;
            while ( *((_WORD *)v6 + v21 + 6) );
            if ( (int)v21 + 1 >= (unsigned int)v21 )
            {
              v22 = 2LL * (unsigned int)(v21 + 1);
              if ( v22 <= 0xFFFFFFFF && (int)v22 + 12 >= (unsigned int)v22 && (int)v22 + 12 <= v9 )
                goto LABEL_6;
            }
          }
          v7 = 0LL;
          break;
        case 5:
          if ( v9 >= 0x20 )
          {
            v19 = -1LL;
            do
              ++v19;
            while ( *((_WORD *)v6 + v19 + 14) );
            if ( (int)v19 + 1 >= (unsigned int)v19 )
            {
              v20 = 2LL * (unsigned int)(v19 + 1);
              if ( v20 <= 0xFFFFFFFF && (int)v20 + 28 >= (unsigned int)v20 && (int)v20 + 28 <= v9 )
                goto LABEL_6;
            }
          }
          v7 = 0LL;
          break;
        case 6:
          if ( v9 < 0x38 )
          {
            v7 = 0LL;
          }
          else
          {
            if ( a3 != 32774 )
              goto LABEL_6;
            v13 = (int)v6[12];
            if ( (int)v13 < 0 )
              goto LABEL_6;
            if ( (v13 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (int)v13 + 52 > v9 )
            {
              v7 = 0LL;
            }
            else
            {
              v16 = (unsigned __int64)v6 + v13 + 52;
              if ( v16 >= (unsigned __int64)(v6 + 13) )
              {
                v17 = -1LL;
                do
                  ++v17;
                while ( *(_WORD *)(v16 + 2 * v17) );
                if ( (int)v17 + 1 >= (unsigned int)v17 )
                {
                  v18 = 2LL * (unsigned int)(v17 + 1);
                  if ( v18 <= 0xFFFFFFFF
                    && (int)v18 + 52 >= (unsigned int)v18
                    && (int)v13 + (int)v18 + 52 >= (unsigned int)(v18 + 52)
                    && (int)v13 + (int)v18 + 52 <= v9 )
                  {
LABEL_6:
                    v7 = _guard_dispatch_icall_fptr();
                    break;
                  }
                }
              }
              v7 = 0LL;
            }
          }
          break;
        case 7:
          if ( v9 >= 0x1A0 )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( *((_WORD *)v6 + v14 + 8) );
            if ( (int)v14 + 1 >= (unsigned int)v14 )
            {
              v15 = 2LL * (unsigned int)(v14 + 1);
              if ( v15 <= 0xFFFFFFFF && (int)v15 + 16 >= (unsigned int)v15 && (int)v15 + 16 <= v9 )
                goto LABEL_6;
            }
          }
          v7 = 0LL;
          break;
        default:
          goto LABEL_6;
      }
    }
    else
    {
      v7 = 0LL;
    }
  }
  else
  {
    UserSetLastError(8LL, v12);
    v7 = 0LL;
  }
  if ( v6 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v23);
  return v7;
}
