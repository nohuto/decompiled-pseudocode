/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x180027B64
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180005ED0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x1800351A8 (pow.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        int a3,
        bool *a4,
        float *a5,
        __int64 *a6)
{
  __int64 v7; // rbp
  unsigned int v10; // ebx
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbp
  float v15; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a2;
  EnterCriticalSection(lpCriticalSection);
  *a4 = 0;
  *a5 = 1.0;
  *a6 = 0LL;
  if ( (unsigned int)v7 < 0x15 )
  {
    v11 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo + 16 * v7 + (a3 != 0 ? 376LL : 40LL));
    for ( i = (_QWORD *)*v11; i != v11; i = (_QWORD *)*i )
    {
      v13 = *(_QWORD *)(i[2] + 56LL);
      v14 = *(_QWORD *)(v13 + 8);
      if ( *(_DWORD *)v13 == -8388608 )
        v15 = 0.0;
      else
        v15 = pow(10.0, *(float *)v13 / 20.0);
      if ( *a5 > v15 )
        *a5 = v15;
      if ( v14 > *a6 )
        *a6 = v14;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  else
  {
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      (const char *)0x8000FFFFLL);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v10;
}
