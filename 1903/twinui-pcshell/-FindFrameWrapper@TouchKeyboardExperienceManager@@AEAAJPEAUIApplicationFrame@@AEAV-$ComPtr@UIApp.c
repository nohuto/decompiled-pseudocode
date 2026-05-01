/*
 * XREFs of ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18030E9D4
 * Callers:
 *     _lambda_05543aeae04520384b0424ea475026ea_::operator() @ 0x18009CB38 (_lambda_05543aeae04520384b0424ea475026ea_--operator().c)
 *     _lambda_531262642ad094c3078a9cb1af58219e_::operator() @ 0x18009CCB0 (_lambda_531262642ad094c3078a9cb1af58219e_--operator().c)
 *     _lambda_b4654e0922f50786bbde1a7e7a9917df_::operator() @ 0x18009D7D4 (_lambda_b4654e0922f50786bbde1a7e7a9917df_--operator().c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803112E4 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803117A0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803118B0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803121E0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009772C (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindFrameWrapper(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  char *Ptr; // rbx
  char *v8; // rbp
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v6 = a1 + 57;
  AcquireSRWLockShared(a1 + 57);
  Ptr = (char *)a1[58].Ptr;
  v8 = (char *)a1[59].Ptr;
  while ( Ptr != v8 )
  {
    v9 = *(_QWORD *)Ptr;
    if ( !*(_BYTE *)(*(_QWORD *)Ptr + 32LL)
      && *(_BYTE *)(v9 + 33)
      && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v9 + 8) + 24LL))(*(_QWORD *)(v9 + 8), a2) == 1 )
    {
      break;
    }
    Ptr += 16;
  }
  if ( Ptr == a1[59].Ptr )
  {
    v10 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(a3, (__int64 *)(*(_QWORD *)Ptr + 8LL));
    v10 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v10;
}
