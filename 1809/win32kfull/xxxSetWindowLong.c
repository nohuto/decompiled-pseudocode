/*
 * XREFs of xxxSetWindowLong @ 0x1C006782C
 * Callers:
 *     NtUserSetWindowLong @ 0x1C0067D00 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C0066C00 (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     FCallerOk @ 0x1C0067C30 (FCallerOk.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00B0B78 (safe_cast_wf_to_PDIALOG.c)
 *     ??8?$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z @ 0x1C0123DD8 (--8-$RedirectedFieldcbWndServerExtra@I@tagWND@@QEBAE$$QEAI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v9; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  int *v17; // rax
  int v18; // r11d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r9
  unsigned int v24; // ecx
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  _WORD *v27; // rdx
  unsigned int v28; // ecx
  _DWORD *v29; // r10
  int v30; // edi
  __int64 v31; // rdx
  unsigned int *v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  _BYTE v35[4]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+24h] [rbp-64h]
  _DWORD v37[24]; // [rsp+28h] [rbp-60h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v35[0] = 0;
  if ( !(unsigned int)FCallerOk(a1) )
  {
    UserSetLastError(5LL);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v35);
    return 0LL;
  }
  if ( (int)v7 >= 0 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
    if ( v7 + 4 > v11 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
      if ( v12 != PsGetCurrentProcessWin32Process(v11) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) == 0 )
      {
        v14 = *(_QWORD *)(v12 + 880);
        v15 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v13) + 880);
        if ( gbEnforceUIPI
          && (unsigned int)v15 <= (unsigned int)v14
          && ((_DWORD)v15 != (_DWORD)v14 || HIDWORD(v15) != HIDWORD(v14) && HIDWORD(v15) != -1 && HIDWORD(v14) != -1)
          && *(int *)(PsGetCurrentProcessWin32Process(HIDWORD(v15)) + 12) >= 0 )
        {
          goto LABEL_55;
        }
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 424LL));
        v35[0] = 1;
      }
    }
  }
  v16 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v16 + 42) & 0x2FFF) == 0 )
    goto LABEL_48;
  v17 = (int *)safe_cast_wf_to_PDIALOG(a1);
  if ( !v17 )
  {
    if ( (int)v7 >= 0 && (int)v7 < *(unsigned __int16 *)(gpsi + 2LL * (unsigned int)(v18 - 666) + 328) - 320 )
    {
      if ( v18 != 679 )
        goto LABEL_47;
      v25 = v16;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 8 )
          goto LABEL_47;
        v36 = **(_DWORD **)(v16 + 296);
        if ( v36 )
        {
          if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
            goto LABEL_47;
        }
        v16 = *((_QWORD *)a1 + 5);
        v25 = v16;
      }
LABEL_38:
      v26 = *(unsigned int *)(v25 + 252);
      if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v26 + *(_DWORD *)(v25 + 200)) )
        goto LABEL_47;
      if ( !a5 )
        goto LABEL_44;
      v27 = *(_WORD **)(*((_QWORD *)a1 + 14) + 8LL);
      if ( (v27[3] & 0x100) == 0 )
        goto LABEL_44;
      v28 = 0;
      v29 = &gDefaultServerClasses;
      while ( *v27 != *(_WORD *)(gpsi + 2LL * ((*v29 >> 3) & 0x1F) + 868) )
      {
        ++v28;
        v29 += 12;
        if ( v28 >= 8 )
          goto LABEL_44;
      }
      if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v28 + 6)
        || (*v29 & 0xF8) == 0xB0 && (unsigned __int64)((int)v7 + 4LL) <= 0xFFFFFFFFFFFFFEF8uLL )
      {
LABEL_44:
        if ( (int)v7 + 4LL <= v26 )
        {
          v34 = *((_QWORD *)a1 + 33);
          v9 = *(_DWORD *)((int)v7 + v34);
          *(_DWORD *)((int)v7 + v34) = v6;
        }
        else
        {
          v30 = v7 - v26;
          v31 = *(_QWORD *)(v16 + 296);
          if ( (*(_DWORD *)(v16 + 232) & 0x800) != 0 )
            v32 = (unsigned int *)(v31 + v30 + *(_QWORD *)(*((_QWORD *)a1 + 3) + 128LL));
          else
            v32 = (unsigned int *)(v30 + v31);
          v9 = *v32;
          v36 = *v32;
          *v32 = v6;
        }
        goto LABEL_60;
      }
LABEL_55:
      v19 = 5LL;
      goto LABEL_56;
    }
LABEL_48:
    v25 = v16;
    if ( (int)v7 < 0 )
    {
      if ( (unsigned int)(v7 + 21) <= 9 )
      {
        v33 = 547;
        if ( _bittest(&v33, v7 + 21) )
        {
          v9 = xxxSetWindowData(a1, (unsigned int)v7, v6, a4);
          goto LABEL_60;
        }
      }
LABEL_47:
      v19 = 1413LL;
      goto LABEL_56;
    }
    goto LABEL_38;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 16 )
    {
      v37[0] = 0;
      if ( (unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==((char *)a1 + 305, v37)
        && *(int *)(v21 + 200) >= 30 )
      {
        v9 = *(_DWORD *)(v22 + 16);
        v36 = v9;
        *(_QWORD *)(v22 + 16) = (int)v6;
      }
      else
      {
        v37[0] = 0;
        if ( !(unsigned __int8)tagWND::RedirectedFieldcbWndServerExtra<unsigned int>::operator==(v20, v37) )
        {
          MicrosoftTelemetryAssertTriggeredMsgKM("MSRC:61600 Unexpected Server Extrabytes are allocated to Dialog");
          v23 = *((_QWORD *)a1 + 5);
        }
        if ( *(int *)(v23 + 200) < 30 )
          MicrosoftTelemetryAssertTriggeredMsgKM("MSRC:61600 Too small Extrabytes are allocated to Dialog");
      }
      goto LABEL_60;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v19 = 1415LL;
LABEL_56:
      UserSetLastError(v19);
      goto LABEL_60;
    }
    goto LABEL_48;
  }
  v36 = *v17;
  v24 = v36;
  *(_QWORD *)v17 = (int)v6;
  v9 = v24;
LABEL_60:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v35);
  return v9;
}
