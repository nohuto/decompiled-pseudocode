/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629_____lambda_5599339c690d67fb68c6b7e13742e629___ @ 0x1801F98CC
 * Callers:
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1801FAF20 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629_____lambda_5599339c690d67fb68c6b7e13742e629___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = a2[2];
  v4 = *a2;
  *a2 = 0LL;
  a2[2] = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(a1 + 40) = 0;
  *((_BYTE *)a2 + 24) = 1;
  *(_QWORD *)a1 = off_18045EBE0;
  return a1;
}
