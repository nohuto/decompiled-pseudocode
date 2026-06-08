/*
 * XREFs of C2Idle @ 0x1C000A920
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00021B8 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 */

char __fastcall C2Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int32 v3; // eax
  int GenAddr; // eax
  int v6; // eax

  v2 = a2;
  v3 = _InterlockedExchange(&ProcBmRldSet, 0);
  if ( v3 == 1 )
  {
    GenAddr = ReadGenAddr((__int64)&dword_1C0013C0C);
    LOBYTE(v3) = WriteGenAddr(&dword_1C0013C0C, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0013C1C )
    {
      v6 = ReadGenAddr((__int64)&dword_1C0013C18);
      LOBYTE(v3) = WriteGenAddr(&dword_1C0013C18, v6 & 0xFFFFFFFD);
    }
  }
  if ( (_DWORD)v2 )
  {
    LOBYTE(v3) = 0;
    __writemsr(0x48u, 0LL);
  }
  if ( a1 )
    LOBYTE(v3) = ReadGenAddr(a1);
  if ( (_DWORD)v2 )
  {
    LOBYTE(v3) = v2;
    __writemsr(0x48u, v2);
  }
  else
  {
    _mm_lfence();
  }
  return v3;
}
