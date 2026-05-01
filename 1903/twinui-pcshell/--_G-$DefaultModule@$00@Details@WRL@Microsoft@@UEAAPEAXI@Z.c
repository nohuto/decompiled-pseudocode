/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180100600
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x1800511E4 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(
        Microsoft::WRL::Details *a1,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  char v3; // bl

  v3 = (char)a2;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
    a1,
    a2,
    a3);
  if ( (v3 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)8);
  return a1;
}
