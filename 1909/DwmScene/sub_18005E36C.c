/*
 * XREFs of sub_18005E36C @ 0x18005E36C
 * Callers:
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 *     atexit @ 0x18012607C (atexit.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
void *sub_18005E36C()
{
  if ( dword_18026AD90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026AD90);
    if ( dword_18026AD90 == -1 )
    {
      memmove(&unk_1802594C0, "ColorGrading", 0xCuLL);
      byte_1802594CC = 0;
      qword_1802594F8 = 15LL;
      byte_1802594E0 = 0;
      qword_1802594F0 = 13LL;
      memmove(&byte_1802594E0, "ContrastCurve", 0xDuLL);
      byte_1802594ED = 0;
      qword_180259518 = 15LL;
      byte_180259500 = 0;
      qword_180259510 = 11LL;
      memmove(&byte_180259500, "ToneMapping", 0xBuLL);
      byte_18025950B = 0;
      qword_180259538 = 15LL;
      byte_180259520 = 0;
      qword_180259530 = 8LL;
      memmove(&byte_180259520, "Vignette", 8uLL);
      byte_180259528 = 0;
      qword_180259558 = 15LL;
      byte_180259540 = 0;
      qword_180259550 = 9LL;
      memmove(&byte_180259540, "DepthOnly", 9uLL);
      byte_180259549 = 0;
      qword_180259578 = 15LL;
      byte_180259560 = 0;
      qword_180259570 = 11LL;
      memmove(&byte_180259560, "GroundPlane", 0xBuLL);
      byte_18025956B = 0;
      atexit(sub_180134F30);
      Init_thread_footer(&dword_18026AD90);
    }
  }
  return &unk_1802594C0;
}
