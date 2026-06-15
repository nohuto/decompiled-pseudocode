/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800EDC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800347E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x180047CC0 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        CSharedStreamGroupProxy *this,
        struct SYSTEM_AUDIO_STREAM *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int16 *v11; // r14
  int v12; // eax
  int v13; // edi
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  _QWORD *v17; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v18; // [rsp+48h] [rbp-40h] BYREF
  char v19; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *((_QWORD *)this + 45) )
  {
    v6 = 1247LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v8 = (_QWORD *)((char *)this + 1576);
  if ( *v8 )
  {
    v6 = 1248LL;
    goto LABEL_3;
  }
  v17 = v8;
  v9 = -1LL;
  v19 = 1;
  do
    ++v9;
  while ( a3[v9] );
  v10 = v9 + 1;
  v18 = 0LL;
  v11 = 0LL;
  if ( v9 + 1 >= v9 && is_mul_ok(v10, 2uLL) )
  {
    v12 = CTCoAllocPolicy::Alloc(v8, (v10 * (unsigned __int128)2uLL) >> 64, 2 * v10, (void **)&v18);
    v11 = v18;
    v13 = v12;
    if ( v12 >= 0 )
      StringCchCopyNExW((char *)v18, v9 + 1, a3, v9);
    if ( !v19 )
      goto LABEL_16;
    v8 = v17;
  }
  else
  {
    v13 = -2147024362;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)v8,
    v11);
LABEL_16:
  if ( v13 >= 0 )
  {
    v14 = 9LL;
    v15 = (_OWORD *)((char *)this + 328);
    do
    {
      *v15 = *(_OWORD *)a2;
      v15[1] = *((_OWORD *)a2 + 1);
      v15[2] = *((_OWORD *)a2 + 2);
      v15[3] = *((_OWORD *)a2 + 3);
      v15[4] = *((_OWORD *)a2 + 4);
      v15[5] = *((_OWORD *)a2 + 5);
      v15[6] = *((_OWORD *)a2 + 6);
      v15 += 8;
      v16 = *((_OWORD *)a2 + 7);
      a2 = (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 128);
      *(v15 - 1) = v16;
      --v14;
    }
    while ( v14 );
    *v15 = *(_OWORD *)a2;
    v15[1] = *((_OWORD *)a2 + 1);
    v15[2] = *((_OWORD *)a2 + 2);
    v15[3] = *((_OWORD *)a2 + 3);
    v15[4] = *((_OWORD *)a2 + 4);
    v15[5] = *((_OWORD *)a2 + 5);
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
}
