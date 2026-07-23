/*
 * XREFs of KiFlushSingleTbWorker @ 0x140128370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 */

__int64 __fastcall KiFlushSingleTbWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h]

  v4 = *(void **)a1;
  result = (unsigned int)(1 << *(_DWORD *)(a1 + 8));
  if ( (result & 0xA) != 0 )
  {
    _EDX = 0;
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      v7 = *(_QWORD *)(result + 184);
      if ( !*(_BYTE *)(v7 + 640) )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v8 = 1LL;
          *((_QWORD *)&v8 + 1) = v4;
          __asm { invpcid edx, [rsp+48h+var_28] }
        }
        else
        {
          result = KiSetUserTbFlushPending(v7, 0LL, 1LL, a4);
        }
      }
    }
  }
  __invlpg(v4);
  return result;
}
