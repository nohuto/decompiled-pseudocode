/*
 * XREFs of xxxDDETrackPostHook @ 0x1C020B98C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C02095B8 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020AA20 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AA7C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B1F0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B2D0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEHookData @ 0x1C021EC8C (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C02433DC (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // r14
  int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  struct tagWND *v15; // rbx
  struct tagDDECONV *DdeConv; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // esi
  struct tagDDECONV *v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-50h] BYREF
  struct tagDDECONV *v30; // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-40h]
  _QWORD v32[7]; // [rsp+48h] [rbp-38h] BYREF
  struct tagDDECONV *v33; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v32, 0, sizeof(v32));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v32);
      LODWORD(v11) = *a1;
    }
    else
    {
      v32[0] = *(unsigned __int16 *)a4;
      v32[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v32);
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 416LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v13 = (struct tagWND *)ValidateHwnd(a3);
  v15 = v13;
  if ( v13 )
  {
    DdeConv = FindDdeConv(v13, a2);
    v33 = DdeConv;
    v5 = (__int64)DdeConv;
    if ( DdeConv )
    {
      if ( a5
        && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL)
        && (*(_DWORD *)(*((_QWORD *)v15 + 2) + 640LL) & 0x40000) == 0 )
      {
        return 0;
      }
      if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 624LL) != 1024 )
      {
        UserSetLastError(1408LL, v14, v17, v18);
        return 0;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v17);
      v29 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v29;
      v30 = v33;
      HMLockObject(v33);
      v20 = (struct tagFREELIST *)*((_QWORD *)v33 + 9);
      *((_QWORD *)v33 + 9) = 0LL;
      xxxFreeListFree(v20);
      if ( (*(_BYTE *)(_HMPheFromObject(v33) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)v33 + 20) & 6) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v24 = *((_QWORD *)v33 + 7);
        if ( v24 )
        {
          v25 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v24 + 32))(a1, a4, v33);
        }
        else if ( (*((_DWORD *)v33 + 20) & 1) != 0 )
        {
          v25 = xxxUnexpectedServerPost(a1, a4, v33);
        }
        else
        {
          v25 = xxxUnexpectedClientPost(a1, a4, v33);
        }
        v12 = v25;
      }
      v5 = ThreadUnlock1(v22, v21, v23);
    }
    else
    {
      v12 = *a1 == 993;
    }
  }
  else
  {
    v12 = (*a1 == 993) + 1;
  }
  if ( v12 == 1 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) == 0 )
  {
    v26 = 0x8000;
    v27 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 994);
    if ( (unsigned __int16)*a1 == 994 )
    {
      v26 = 33025;
    }
    else
    {
      v27 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 995);
      if ( (unsigned __int16)*a1 == 995 )
        goto LABEL_48;
      v27 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 996);
      if ( (unsigned __int16)*a1 == 996 )
      {
        v26 = 32769;
      }
      else
      {
        v27 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 997);
        if ( (unsigned __int16)*a1 != 997 )
        {
          v27 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 998);
          if ( (unsigned __int16)*a1 == 998 )
            goto LABEL_48;
          v27 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 999);
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v12;
            v26 = 34816;
            goto LABEL_48;
          }
        }
        v26 = 32899;
      }
    }
LABEL_48:
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)v27, v14, 14, 12, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      xxxFreeDDEHandle(v27, *a4, v26);
      return 3;
    }
  }
  return v12;
}
