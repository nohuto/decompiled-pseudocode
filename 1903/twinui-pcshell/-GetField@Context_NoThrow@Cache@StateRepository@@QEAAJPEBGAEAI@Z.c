/*
 * XREFs of ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAI@Z @ 0x18040B6B4
 * Callers:
 *     ?Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18040AD9C (-Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall StateRepository::Cache::Context_NoThrow::GetField(
        StateRepository::Cache::Context_NoThrow *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  int Field_UInt32; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Field_UInt32 = SRCacheContext_GetField_UInt32(*(_QWORD *)this, a2, a3);
  v4 = Field_UInt32;
  if ( Field_UInt32 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F0,
    (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-context.hpp",
    (const char *)(unsigned int)Field_UInt32);
  return v4;
}
