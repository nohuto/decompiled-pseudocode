/*
 * XREFs of ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x180096EBC
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18009699C (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x180096F84 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800372E0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

unsigned __int16 *__fastcall CContactManager::LoadFeedbackString(CContactManager *this, HINSTANCE a2, UINT a3, int *a4)
{
  unsigned __int16 *v5; // rbx
  int StringW; // eax
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  size_t Buffer[66]; // [rsp+20h] [rbp-238h] BYREF

  v5 = 0LL;
  StringW = LoadStringW(a2, a3, (LPWSTR)Buffer, 260);
  if ( StringW > 0 && (unsigned __int64)StringW < 0x104 )
  {
    *a4 = StringW;
    v7 = StringW + 1;
    v8 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                               WPF::g_pProcessHeap,
                               2 * v7);
    v5 = v8;
    if ( v8 )
    {
      if ( (int)StringCchCopyW(v8, v7, Buffer) < 0 )
      {
        (*(void (__fastcall **)(WPF::HeapBase *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v5);
        v5 = 0LL;
        *a4 = 0;
      }
    }
  }
  return v5;
}
