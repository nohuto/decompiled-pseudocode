/*
 * XREFs of xxxSetWindowLong @ 0x1C00A8474
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C00A82A0 (NtUserSetWindowLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FCallerOk @ 0x1C00A83A4 (FCallerOk.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C00ABB38 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0108CD0 (safe_cast_wf_to_PDIALOG.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0109D24 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // ecx
  __int64 v29; // rcx
  _WORD *v30; // rdx
  unsigned int v31; // ecx
  _DWORD *v32; // r10
  int v33; // esi
  __int64 v34; // r8
  int v35; // ecx
  unsigned int *v36; // r8
  unsigned int v37; // ebx
  __int64 v38; // rcx
  _BYTE v39[4]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+24h] [rbp-54h]
  _DWORD v41[20]; // [rsp+28h] [rbp-50h] BYREF

  v6 = a2;
  v8 = 0;
  v39[0] = 0;
  if ( !(unsigned int)FCallerOk((__int64)a1) )
  {
    UserSetLastError(5LL, v9, v10, v11);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v39);
    return 0LL;
  }
  if ( (int)v6 >= 0 )
  {
    v13 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    v9 = v6 + 4;
    if ( v6 + 4 > v13 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v14 != PsGetCurrentProcessWin32Process(v13, v9) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v9);
        if ( !(unsigned __int8)CheckAccess(CurrentProcessWin32Process + 872, v14 + 872)
          && *(int *)(PsGetCurrentProcessWin32Process(v18, v17) + 12) >= 0 )
        {
          goto LABEL_50;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        v39[0] = 1;
      }
    }
  }
  v20 = *((_QWORD *)a1 + 5);
  v19 = *(_WORD *)(v20 + 42) & 0x3FFF;
  if ( (*(_WORD *)(v20 + 42) & 0x3FFF) != 0 )
  {
    v21 = (int *)safe_cast_wf_to_PDIALOG(a1);
    if ( v21 )
    {
      if ( !(_DWORD)v6 )
      {
        v40 = *v21;
        v28 = v40;
        *(_QWORD *)v21 = (int)a3;
        v8 = v28;
LABEL_52:
        CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v39);
        return v8;
      }
      if ( (_DWORD)v6 == 16 )
      {
        v41[0] = 0;
        if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 321, v41)
          && *(int *)(v24 + 200) >= 30 )
        {
          v8 = *(_DWORD *)(v25 + 16);
          v40 = v8;
          *(_QWORD *)(v25 + 16) = (int)a3;
        }
        else
        {
          v41[0] = 0;
          if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v23, v41) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
            v27 = *((_QWORD *)a1 + 5);
          }
          if ( *(int *)(v27 + 200) < 30 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
        }
        goto LABEL_52;
      }
      if ( (unsigned int)v6 <= 0x1D )
      {
        v22 = 1415LL;
LABEL_51:
        UserSetLastError(v22, v9, v19, v20);
        goto LABEL_52;
      }
    }
    else if ( (int)v6 >= 0 )
    {
      v9 = (unsigned int)(v19 - 666);
      if ( (int)v6 < *(unsigned __int16 *)(gpsi + 2 * v9 + 328) - 320 )
      {
        if ( (_DWORD)v19 != 679 )
          goto LABEL_42;
        v29 = v20;
        if ( (_DWORD)v6 )
        {
          if ( (_DWORD)v6 != 8 )
            goto LABEL_42;
          v40 = **(_DWORD **)(v20 + 296);
          if ( v40 )
          {
            if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
              goto LABEL_42;
          }
          v20 = *((_QWORD *)a1 + 5);
          v29 = v20;
        }
        goto LABEL_33;
      }
    }
  }
  v29 = v20;
  if ( (int)v6 < 0 )
  {
    if ( (unsigned int)(v6 + 21) <= 9 )
    {
      v35 = 547;
      if ( _bittest(&v35, v6 + 21) )
      {
        v8 = xxxSetWindowData(a1);
        goto LABEL_52;
      }
    }
LABEL_42:
    v22 = 1413LL;
    goto LABEL_51;
  }
LABEL_33:
  v19 = *(unsigned int *)(v29 + 252);
  if ( (unsigned __int64)(unsigned int)v6 + 4 > (unsigned int)(v19 + *(_DWORD *)(v29 + 200)) )
    goto LABEL_42;
  if ( a5 )
  {
    v30 = *(_WORD **)(*((_QWORD *)a1 + 17) + 8LL);
    if ( (v30[3] & 0x100) != 0 )
    {
      v31 = 0;
      v32 = &gDefaultServerClasses;
      while ( *v30 != *(_WORD *)(gpsi + 2LL * ((*v32 >> 3) & 0x1F) + 868) )
      {
        ++v31;
        v32 += 12;
        if ( v31 >= 8 )
          goto LABEL_39;
      }
      if ( (int)v6 < *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6) )
      {
        v9 = *v32 & 0xF8;
        if ( (*(_BYTE *)v32 & 0xF8) != 0xB0 || (unsigned __int64)((int)v6 + 4LL) > 0xFFFFFFFFFFFFFEE0uLL )
        {
LABEL_50:
          v22 = 5LL;
          goto LABEL_51;
        }
      }
    }
  }
LABEL_39:
  if ( (int)v6 + 4LL <= v19 )
  {
    v38 = *((_QWORD *)a1 + 35);
    v37 = *(_DWORD *)((int)v6 + v38);
    *(_DWORD *)((int)v6 + v38) = a3;
  }
  else
  {
    v33 = v6 - v19;
    if ( (*(_DWORD *)(v20 + 232) & 0x800) != 0 )
      v34 = v33 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL);
    else
      v34 = v33;
    v36 = (unsigned int *)(*(_QWORD *)(v20 + 296) + v34);
    v37 = *v36;
    v40 = *v36;
    *v36 = a3;
  }
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v39);
  return v37;
}
