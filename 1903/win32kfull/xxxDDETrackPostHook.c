/*
 * XREFs of xxxDDETrackPostHook @ 0x1C020BC3C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0209868 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020ACD0 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C020AD2C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B4A0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEHookData @ 0x1C021F1CC (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0243B1C (xxxMessageEvent.c)
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
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // esi
  struct tagDDECONV *v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  struct tagDDECONV *v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+40h] [rbp-40h]
  _QWORD v35[7]; // [rsp+48h] [rbp-38h] BYREF
  struct tagDDECONV *v36; // [rsp+B8h] [rbp+38h]

  v5 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v35, 0, sizeof(v35));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v35);
      LODWORD(v11) = *a1;
    }
    else
    {
      v35[0] = *(unsigned __int16 *)a4;
      v35[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, v11, a3, (unsigned int)*a4, v10, (__int64)v35);
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
    v36 = DdeConv;
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
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v17, v18);
      v32 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
      v33 = v36;
      HMLockObject(v36);
      v20 = (struct tagFREELIST *)*((_QWORD *)v36 + 9);
      *((_QWORD *)v36 + 9) = 0LL;
      xxxFreeListFree(v20, v21, v22, v23);
      if ( (*(_BYTE *)(_HMPheFromObject(v36) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)v36 + 20) & 6) != 0 )
      {
        v12 = 1;
      }
      else
      {
        v27 = *((_QWORD *)v36 + 7);
        if ( v27 )
        {
          v28 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v27 + 32))(a1, a4, v36);
        }
        else if ( (*((_DWORD *)v36 + 20) & 1) != 0 )
        {
          v28 = xxxUnexpectedServerPost(a1, a4, v36);
        }
        else
        {
          v28 = xxxUnexpectedClientPost(a1, a4, v36);
        }
        v12 = v28;
      }
      v5 = ThreadUnlock1(v25, v24, v26);
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
    v29 = 0x8000;
    v30 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 994);
    if ( (unsigned __int16)*a1 == 994 )
    {
      v29 = 33025;
    }
    else
    {
      v30 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 995);
      if ( (unsigned __int16)*a1 == 995 )
        goto LABEL_48;
      v30 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 996);
      if ( (unsigned __int16)*a1 == 996 )
      {
        v29 = 32769;
      }
      else
      {
        v30 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 997);
        if ( (unsigned __int16)*a1 != 997 )
        {
          v30 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 998);
          if ( (unsigned __int16)*a1 == 998 )
            goto LABEL_48;
          v30 = (struct tagDDECONV *)((unsigned int)(unsigned __int16)*a1 - 999);
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v12;
            v29 = 34816;
            goto LABEL_48;
          }
        }
        v29 = 32899;
      }
    }
LABEL_48:
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)v30, v14, 14, 12, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      xxxFreeDDEHandle(v30, *a4, v29);
      return 3;
    }
  }
  return v12;
}
