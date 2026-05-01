/*
 * XREFs of ?EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z @ 0x18042A328
 * Callers:
 *     ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z @ 0x180429818 (-Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z.c)
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z @ 0x18042A540 (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PE.c)
 *     ?Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z @ 0x18042C8E8 (-Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoTh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x1800D3EF7 (memcpy_0.c)
 */

__int64 __fastcall StateRepository::Cache::Key_NoThrow::EnsureCapacity(const void **this, const void *a2)
{
  void *v4; // rax
  const void *v5; // rdi
  const void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > this[66] )
  {
    v4 = (void *)SRCache_AllocStringBuffer((unsigned int)a2);
    v5 = v4;
    if ( !v4 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x186,
        (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    memcpy_0(v4, this[67], 2LL * (_QWORD)this[66]);
    v7 = *this;
    *this = v5;
    if ( v7 )
    {
      SRCache_Free();
      v5 = *this;
    }
    this[67] = v5;
    this[66] = a2;
  }
  return 0LL;
}
