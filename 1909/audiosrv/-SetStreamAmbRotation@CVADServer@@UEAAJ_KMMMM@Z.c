/*
 * XREFs of ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1800E64D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_qq @ 0x1800D2038 (WPP_SF_qq.c)
 *     ?SetAmbRotation@CAudioStream@@QEAAJMMMM@Z @ 0x1800DACB0 (-SetAmbRotation@CAudioStream@@QEAAJMMMM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamAmbRotation(CVADServer *this, __int64 a2, float a3, float a4, float a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  CAudioStream *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v15; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    v8 = 2331LL;
    v9 = 2290679809LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
    goto LABEL_15;
  }
  v10 = (CAudioStream *)*((_QWORD *)this + 24);
  if ( !v10 )
  {
    v7 = -2004287487;
    v8 = 2332LL;
    v9 = 2290679809LL;
    goto LABEL_13;
  }
  v11 = *((_QWORD *)v10 + 6);
  if ( a2 != v11 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
        a2,
        v11);
    }
    v7 = -2147024809;
    v8 = 2337LL;
    v9 = 2147942487LL;
    goto LABEL_13;
  }
  v12 = CAudioStream::SetAmbRotation(v10, a3, a4, a5);
  v7 = v12;
  if ( v12 < 0 )
  {
    v9 = (unsigned int)v12;
    v8 = 2343LL;
    goto LABEL_13;
  }
  v7 = 0;
LABEL_15:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
