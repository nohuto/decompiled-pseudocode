/*
 * XREFs of HMValidateHandle @ 0x1C002E8E4
 * Callers:
 *     ValidateHmenu @ 0x1C002EBF0 (ValidateHmenu.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0115520 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C0117EE0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C0165F5C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ValidateHandleSecure @ 0x1C002BD60 (ValidateHandleSecure.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, char a2)
{
  __int64 v3; // rbx
  char *v5; // rdi
  _QWORD *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rcx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v5 = (char *)qword_1C0213758 + (unsigned int)(unsigned __int16)a1 * dword_1C0213760;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v12);
    v6 = gpKernelHandleTable;
    v7 = 3LL * (unsigned int)((v5 - (char *)qword_1C0213758) >> 5);
    if ( (WORD1(a1) == *((_WORD *)v5 + 13)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
      && (v5[25] & 1) == 0
      && v5[24] == a2 )
    {
      v3 = v6[v7];
    }
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL, v8) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL, v8) != 0);
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v11 = 1400LL;
      break;
    case 2:
      v11 = 1401LL;
      break;
    case 3:
      v11 = 1402LL;
      break;
    case 4:
      v11 = 1405LL;
      break;
    case 5:
      v11 = 1404LL;
      break;
    case 8:
      v11 = 1403LL;
      break;
    default:
      v11 = 6LL;
      break;
  }
  UserSetLastError(v11, v9);
  return 0LL;
}
