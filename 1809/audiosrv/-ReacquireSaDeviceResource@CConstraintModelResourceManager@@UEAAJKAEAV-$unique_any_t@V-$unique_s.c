/*
 * XREFs of ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800123A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800F3A78 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        int a2,
        _QWORD *a3)
{
  struct ReacquireResourceWorkItem *v3; // rbx
  unsigned int v7; // edi
  struct ReacquireResourceWorkItem *v8; // rsi
  struct ReacquireResourceWorkItem *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( !*a3 )
    goto LABEL_2;
  v10 = (struct ReacquireResourceWorkItem *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 0;
    *(_DWORD *)v10 = a2;
    *((_QWORD *)v10 + 1) = a3;
  }
  else
  {
    v3 = 0LL;
  }
  v8 = v3;
  if ( v3 )
  {
    v13 = CConstraintModelResourceManager::AddWorkItemToQueue(this, v3);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v3 = 0LL;
LABEL_2:
      v7 = 0;
      v8 = 0LL;
      goto LABEL_3;
    }
    v12 = (unsigned int)v13;
    v11 = 966LL;
  }
  else
  {
    v7 = -2147024882;
    v11 = 964LL;
    v12 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
    (const char *)v12,
    v14);
LABEL_3:
  if ( v8 )
    operator delete(v3, (const struct std::nothrow_t *)0x18);
  return v7;
}
