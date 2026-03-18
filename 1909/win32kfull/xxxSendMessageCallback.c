/*
 * XREFs of xxxSendMessageCallback @ 0x1C001FD04
 * Callers:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C0011538 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C001FBA0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0040E40 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxBroadcastMessage @ 0x1C01198BC (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(struct tagWND *, _QWORD, __int64, _QWORD),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r11
  __int64 v10; // r14
  void (__fastcall *v12)(struct tagWND *, _QWORD, __int64, _QWORD); // r12
  __int64 *v13; // rbx
  __int64 v14; // r13
  int v15; // esi
  ULONG_PTR v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rcx
  int v20; // eax
  __int64 v21; // rcx
  BOOL v22; // ecx
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  unsigned __int64 v25; // rdx
  BOOL v26; // ecx
  __int64 v27[13]; // [rsp+60h] [rbp-68h] BYREF
  int v28; // [rsp+D8h] [rbp+10h]
  int v29; // [rsp+D8h] [rbp+10h]
  __int64 v30; // [rsp+E0h] [rbp+18h]

  v30 = a3;
  v9 = a4;
  v10 = a2;
  v12 = a5;
  v13 = 0LL;
  v14 = a6;
  v15 = 1;
  if ( a5 || (v28 = 1, a6 != 1) )
    v28 = 0;
  if ( a2 >= 0x400 )
  {
    v20 = 0;
  }
  else
  {
    if ( (MessageTable[a2] & 0x200) == 0 && (a2 != 537 || (a3 & 0x8000) == 0) )
      goto LABEL_7;
    v20 = 1;
  }
  if ( v20 )
  {
    UserSetLastError(1159LL);
    return 0LL;
  }
LABEL_7:
  if ( a1 == (struct tagWND *)-1LL )
  {
    memset(v27, 0, 24);
    if ( a5 )
    {
      v15 = 3;
      v27[0] = (__int64)a5;
      v27[1] = a6;
      LODWORD(v27[2]) = a7;
      v13 = v27;
    }
    return xxxBroadcastMessage(0, a2, a3, a4, v15, (__int64)v13, a8);
  }
  else
  {
    v16 = 0LL;
    LOWORD(v17) = 0;
    if ( a1 )
      v17 = *(_QWORD *)a1;
    if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL)
      || (v16 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]),
          *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v17) != a1)
      || *(_BYTE *)(v16 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v16, 1uLL);
    }
    if ( !v28 && gptiCurrent == *((_QWORD *)a1 + 2) )
    {
      if ( ((*(_BYTE *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x20) != 0 )
      {
        v22 = a2 < 0x400 && ((unsigned __int16)MessageTable[a2] >> 14) & 1;
        if ( !v22 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
        {
          v27[3] = *(_QWORD *)a1;
          LODWORD(v27[2]) = a2;
          v27[1] = a3;
          v27[0] = v9;
          v27[4] = 0LL;
          xxxCallHook(0, 0LL, (__int64)v27, 4);
          a3 = v30;
          v9 = a4;
        }
      }
      v21 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v21 + 18) & 4) != 0 )
      {
        v25 = *(_QWORD *)(v21 + 120);
        if ( v25 >= 7 )
          return 0LL;
        a5 = (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v25])(
                                                                              a1,
                                                                              (unsigned int)v10,
                                                                              a3,
                                                                              v9);
      }
      else
      {
        xxxSendMessageToClient(a1, v10, a3, v9, 0LL, 0, (__int64 *)&a5);
      }
      if ( v12 )
      {
        if ( a7 )
        {
          v23 = *(_DWORD **)(gptiCurrent + 440LL);
          v29 = *v23 & 8;
          *v23 |= 4u;
          **(_DWORD **)(gptiCurrent + 440LL) |= 8u;
          if ( (_DWORD)v10 == 576 || (_DWORD)v10 == 281 )
            ((void (__fastcall *)(struct tagWND *, _QWORD, __int64, void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD), void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD), _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v10]])(
              a1,
              (unsigned int)v10,
              v14,
              a5,
              v12,
              *(_QWORD *)(gpsi + 752LL),
              1,
              0LL);
          else
            SfnDWORD((_DWORD)a1, v10, v14, (_DWORD)a5, (__int64)v12, *(_QWORD *)(gpsi + 752LL));
          **(_DWORD **)(gptiCurrent + 440LL) &= ~4u;
          v24 = *(_DWORD **)(gptiCurrent + 440LL);
          if ( v29 )
            *v24 |= 8u;
          else
            *v24 &= ~8u;
        }
        else
        {
          v12(a1, (unsigned int)v10, v14, a5);
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x2000) != 0 )
      {
        v26 = (unsigned int)v10 < 0x400 && ((unsigned __int16)MessageTable[v10] >> 14) & 1;
        if ( !v26 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
        {
          v27[4] = *(_QWORD *)a1;
          LODWORD(v27[3]) = v10;
          v27[2] = v30;
          v27[1] = a4;
          v27[0] = (__int64)a5;
          v27[5] = 0LL;
          xxxCallHook(0, 0LL, (__int64)v27, 12);
        }
      }
      return 1LL;
    }
    else
    {
      memset(v27, 0, 0x30uLL);
      v18 = 0LL;
      if ( a5 )
      {
        LODWORD(v27[0]) = a7 != 0 ? 257 : 1;
        v27[1] = (__int64)a5;
        v27[2] = a6;
        v18 = v27;
      }
      return xxxInterSendMsgEx(a1, (unsigned int)v10, v30, a4, 0, *((_QWORD *)a1 + 2), v18, a8, a9);
    }
  }
}
