/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_____lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___ @ 0x1801B9FD4
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1801BBCC0 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___::CTaskWrapper__lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_____lambda_1fe66ecf7a6d9918b4f3cb70af5821e0___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)a1 = off_18043D210;
  return a1;
}
