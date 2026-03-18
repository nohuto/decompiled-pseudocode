/*
 * XREFs of xxxSendMessageCallback @ 0x1C00D1744
 * Callers:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00D15F0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C002D410 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxBroadcastMessage @ 0x1C013479C (xxxBroadcastMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
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
  int v16; // eax
  ULONG_PTR v17; // r9
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v21; // rcx
  BOOL v22; // ecx
  unsigned __int64 v23; // rax
  _DWORD *v24; // rcx
  unsigned int *v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  BOOL v28; // ecx
  __int64 v29; // [rsp+60h] [rbp-68h] BYREF
  __int64 v30; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  __int64 v33; // [rsp+80h] [rbp-48h]
  __int64 v34; // [rsp+88h] [rbp-40h]
  int v35; // [rsp+D8h] [rbp+10h]
  int v36; // [rsp+D8h] [rbp+10h]
  __int64 v37; // [rsp+E0h] [rbp+18h]

  v37 = a3;
  v9 = a4;
  v10 = (unsigned int)a2;
  v12 = a5;
  v13 = 0LL;
  v14 = a6;
  v15 = 1;
  if ( a5 || (v35 = 1, a6 != 1) )
    v35 = 0;
  if ( (unsigned int)a2 < 0x400 )
  {
    if ( (MessageTable[(unsigned int)a2] & 0x200) == 0 && ((_DWORD)a2 != 537 || (a3 & 0x8000) == 0) )
      goto LABEL_7;
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  if ( v16 )
  {
    UserSetLastError(1159LL, a2, a3, a4);
    return 0LL;
  }
LABEL_7:
  if ( a1 != (struct tagWND *)-1LL )
  {
    v17 = 0LL;
    LOWORD(v18) = 0;
    if ( a1 )
      v18 = *(_QWORD *)a1;
    if ( (unsigned __int64)(unsigned __int16)v18 >= *(_QWORD *)(gpsi + 8LL)
      || (v17 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v18 * LODWORD(gSharedInfo[2]),
          *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v18) != a1)
      || *(_BYTE *)(v17 + 24) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v17, 1uLL);
    }
    if ( v35 || gptiCurrent != *((_QWORD *)a1 + 2) )
    {
      v19 = 0LL;
      if ( a5 )
      {
        LODWORD(v29) = a7 != 0 ? 257 : 1;
        v30 = (__int64)a5;
        v31 = a6;
        v19 = &v29;
      }
      return xxxInterSendMsgEx(a1, a2, a3, v9, 0, *((_QWORD *)a1 + 2), v19, a8, a9);
    }
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x20) != 0 )
    {
      v22 = (unsigned int)a2 < 0x400 && ((unsigned __int16)MessageTable[(unsigned int)a2] >> 14) & 1;
      if ( !v22 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
      {
        v32 = *(_QWORD *)a1;
        LODWORD(v31) = a2;
        v30 = a3;
        v29 = v9;
        v33 = 0LL;
        xxxCallHook(0, 0LL, (__int64)&v29, 4);
        a3 = v37;
        v9 = a4;
      }
    }
    v21 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v21 + 18) & 4) == 0 )
    {
      xxxSendMessageToClient(a1, v10, a3, v9, 0LL, 0, (__int64 *)&a5);
LABEL_24:
      if ( v12 )
      {
        if ( a7 )
        {
          v24 = *(_DWORD **)(gptiCurrent + 448LL);
          v36 = *v24 & 8;
          *v24 |= 4u;
          **(_DWORD **)(gptiCurrent + 448LL) |= 8u;
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
            SfnDWORD(
              (volatile signed __int32 *)a1,
              (unsigned int)v10,
              v14,
              (__int64)a5,
              (__int64)v12,
              *(_QWORD *)(gpsi + 752LL));
          **(_DWORD **)(gptiCurrent + 448LL) &= ~4u;
          v25 = *(unsigned int **)(gptiCurrent + 448LL);
          v26 = *v25;
          if ( v36 )
            v27 = v26 | 8;
          else
            v27 = v26 & 0xFFFFFFF7;
          *v25 = v27;
        }
        else
        {
          v12(a1, (unsigned int)v10, v14, a5);
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x2000) != 0 )
      {
        v28 = (unsigned int)v10 < 0x400 && ((unsigned __int16)MessageTable[v10] >> 14) & 1;
        if ( !v28 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
        {
          v33 = *(_QWORD *)a1;
          LODWORD(v32) = v10;
          v31 = v37;
          v30 = a4;
          v29 = (__int64)a5;
          v34 = 0LL;
          xxxCallHook(0, 0LL, (__int64)&v29, 12);
        }
      }
      return 1LL;
    }
    v23 = *(_QWORD *)(v21 + 120);
    if ( v23 < 7 )
    {
      a5 = (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64))*(&gServerHandlers + v23))(
                                                                            a1,
                                                                            (unsigned int)v10,
                                                                            a3,
                                                                            v9);
      goto LABEL_24;
    }
    return 0LL;
  }
  if ( a5 )
  {
    v15 = 3;
    v29 = (__int64)a5;
    v30 = a6;
    LODWORD(v31) = a7;
    v13 = &v29;
  }
  return xxxBroadcastMessage(0, a2, a3, a4, v15, (__int64)v13, a8);
}
