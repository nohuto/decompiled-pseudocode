/*
 * XREFs of xxxSendShutdownData @ 0x1C021FE54
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SfnCOPYDATA @ 0x1C00B62F0 (SfnCOPYDATA.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetWindowIcon @ 0x1C015B834 (_GetWindowIcon.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx
  char *Prop; // rax
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B8h]
  int v15; // [rsp+54h] [rbp-B4h]
  _QWORD *v16; // [rsp+58h] [rbp-B0h]
  _QWORD v17[134]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v17, 0, 0x428uLL);
  v15 = 0;
  if ( gspwndBSDR )
  {
    if ( a1 == 0xFFFF )
    {
LABEL_19:
      v16 = v17;
      v17[0] = a1;
      v13 = 0LL;
      v14 = 1064;
      SfnCOPYDATA(
        (_QWORD *)gspwndBSDR,
        809,
        a2,
        (__int64)&v13,
        *(_QWORD *)(*(_QWORD *)(gspwndBSDR + 40) + 120LL),
        *(_QWORD *)(gpsi + 752LL));
      return 0LL;
    }
    v4 = (_QWORD *)ValidateHwndEx(a1, 0LL, 0LL);
    if ( !a2 )
    {
      if ( v4 )
        *(_DWORD *)(v4[5] + 232LL) &= ~0x4000u;
      goto LABEL_19;
    }
    v7 = (__int64)v4;
    if ( v4 )
    {
      v8 = v4[5];
      if ( *v4 == ghwndBlocking )
      {
        a2 = 2LL;
LABEL_9:
        *(_DWORD *)(v8 + 232) |= 0x4000u;
        v17[1] = GetWindowIcon((__int64)v4, 1LL, v5, v6);
        v9 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 184LL);
        if ( v9 )
        {
          v10 = ((unsigned __int64)v9 >> 1) + 1;
          if ( v10 > 0x105 )
            v10 = 261LL;
          RtlStringCchCopyW((char *)&v17[67] + 2, v10, *(char **)(v7 + 184));
        }
        else
        {
          WORD1(v17[67]) = 0;
        }
        Prop = (char *)GetProp(v7, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
        if ( Prop )
          RtlStringCchCopyW((char *)&v17[2], 261LL, Prop);
        else
          LOWORD(v17[2]) = 0;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v8 + 236) == 1 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
