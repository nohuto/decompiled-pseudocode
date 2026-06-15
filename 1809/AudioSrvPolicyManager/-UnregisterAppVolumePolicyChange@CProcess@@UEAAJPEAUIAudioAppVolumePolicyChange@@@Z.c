/*
 * XREFs of ?UnregisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180017C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180010108 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

__int64 __fastcall CProcess::UnregisterAppVolumePolicyChange(CProcess *this, struct IAudioAppVolumePolicyChange *a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  __int64 **v5; // r8
  __int64 *i; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 30);
  if ( !v2 )
    return 0LL;
  v4 = -2147023728;
  EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 168));
  v5 = (__int64 **)(v2 + 120);
  for ( i = *(__int64 **)(v2 + 120); i && (struct IAudioAppVolumePolicyChange *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    v7 = (__int64 *)*i;
    if ( i == *v5 )
      *v5 = v7;
    else
      *(_QWORD *)i[1] = v7;
    v8 = i[1];
    if ( i == *(__int64 **)(v2 + 128) )
      *(_QWORD *)(v2 + 128) = v8;
    else
      *(_QWORD *)(*i + 8) = v8;
    *i = *(_QWORD *)(v2 + 152);
    v9 = (*(_QWORD *)(v2 + 136))-- == 1LL;
    *(_QWORD *)(v2 + 152) = i;
    if ( v9 )
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(v2 + 120);
    v4 = 0;
  }
  if ( v2 != -168 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 168));
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B2,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
