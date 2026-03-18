/*
 * XREFs of KiFlushSingleTbWorker @ 0x14012F600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401C5850 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KiFlushSingleTbWorker(__int64 a1)
{
  void *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h]

  v1 = *(void **)a1;
  result = (unsigned int)(1 << *(_DWORD *)(a1 + 8));
  if ( (result & 0xA) != 0 )
  {
    _EDX = 0;
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      v4 = *(_QWORD *)(result + 184);
      if ( !*(_BYTE *)(v4 + 648) )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v5 = 1LL;
          *((_QWORD *)&v5 + 1) = v1;
          __asm { invpcid edx, [rsp+48h+var_28] }
        }
        else
        {
          result = KiSetUserTbFlushPending(v4, 0LL, 1LL);
        }
      }
    }
  }
  __invlpg(v1);
  return result;
}
