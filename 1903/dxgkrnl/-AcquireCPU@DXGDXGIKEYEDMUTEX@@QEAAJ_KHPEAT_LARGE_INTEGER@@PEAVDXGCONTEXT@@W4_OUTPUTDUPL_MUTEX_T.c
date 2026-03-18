/*
 * XREFs of ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0270B1C
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0279D80 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C027A800 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C02683B0 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::AcquireCPU(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        union _LARGE_INTEGER *a4,
        __int64 a5,
        int a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  size_t v14; // [rsp+30h] [rbp-18h]

  if ( a5 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = 674LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*(_DWORD *)(a1 + 24LL * a6 + 16) )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 679LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *(_QWORD *)(a1 + 24LL * a6 + 32) != PsGetCurrentProcess(a1, a2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 680LL;
    WdLogEvent5_WdAssertion(v12);
  }
  LODWORD(v14) = 0;
  result = DXGKEYEDMUTEX::AcquireSync(
             *(unsigned int *)(a1 + 24LL * a6 + 16),
             0LL,
             1,
             a4,
             (DXGKEYEDMUTEX *)(a1 + 112),
             0LL,
             v14,
             (unsigned __int64 *)(a1 + 136));
  if ( (int)result >= 0 && (_DWORD)result != 258 )
  {
    *(_QWORD *)(a1 + 120) = a5;
    result = 0LL;
    *(_DWORD *)(a1 + 128) = 1;
  }
  return result;
}
