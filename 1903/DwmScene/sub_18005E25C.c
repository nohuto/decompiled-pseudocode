/*
 * XREFs of sub_18005E25C @ 0x18005E25C
 * Callers:
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=5
void *sub_18005E25C()
{
  if ( dword_180269D90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_180269D90);
    if ( dword_180269D90 == -1 )
    {
      memmove(&unk_1802584C0, "ColorGrading", 0xCuLL);
      byte_1802584CC = 0;
      qword_1802584F8 = 15LL;
      byte_1802584E0 = 0;
      qword_1802584F0 = 13LL;
      memmove(&byte_1802584E0, "ContrastCurve", 0xDuLL);
      byte_1802584ED = 0;
      qword_180258518 = 15LL;
      byte_180258500 = 0;
      qword_180258510 = 11LL;
      memmove(&byte_180258500, "ToneMapping", 0xBuLL);
      byte_18025850B = 0;
      qword_180258538 = 15LL;
      byte_180258520 = 0;
      qword_180258530 = 8LL;
      memmove(&byte_180258520, "Vignette", 8uLL);
      byte_180258528 = 0;
      qword_180258558 = 15LL;
      byte_180258540 = 0;
      qword_180258550 = 9LL;
      memmove(&byte_180258540, "DepthOnly", 9uLL);
      byte_180258549 = 0;
      qword_180258578 = 15LL;
      byte_180258560 = 0;
      qword_180258570 = 11LL;
      memmove(&byte_180258560, "GroundPlane", 0xBuLL);
      byte_18025856B = 0;
      atexit(sub_180134E20);
      Init_thread_footer(&dword_180269D90);
    }
  }
  return &unk_1802584C0;
}
