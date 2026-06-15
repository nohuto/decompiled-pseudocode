/*
 * XREFs of ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180043FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800FF498 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquireSaDeviceResource(
        CConstraintModelResourceManager *this,
        int a2,
        _QWORD *a3)
{
  struct ReacquireResourceWorkItem *v3; // rbx
  unsigned int v7; // edi
  struct ReacquireResourceWorkItem *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( !*a3 )
    goto LABEL_2;
  v9 = (struct ReacquireResourceWorkItem *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 4) = 0;
    *(_DWORD *)v9 = a2;
    *((_QWORD *)v9 + 1) = a3;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v12 = CConstraintModelResourceManager::AddWorkItemToQueue(this, v3);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v3 = 0LL;
LABEL_2:
      v7 = 0;
      goto LABEL_3;
    }
    v11 = (unsigned int)v12;
    v10 = 966LL;
  }
  else
  {
    v7 = -2147024882;
    v10 = 964LL;
    v11 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
    (const char *)v11);
LABEL_3:
  if ( v3 )
    operator delete(v3, (const struct std::nothrow_t *)0x18);
  return v7;
}
