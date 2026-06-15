/*
 * XREFs of ?InitializeAudioThreadpool@@YAJXZ @ 0x180052680
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800524D0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 */

__int64 InitializeAudioThreadpool(void)
{
  _QWORD *v0; // rax
  CAudioThreadPool *v1; // rcx

  v0 = operator new(0x60uLL);
  if ( v0 )
  {
    v0[10] = 0LL;
    v1 = (CAudioThreadPool *)&CAudioThreadPool::`vftable';
    *v0 = &CAudioThreadPool::`vftable';
    *((_DWORD *)v0 + 2) = 3;
    v0[2] = 0LL;
    v0[3] = 0LL;
    v0[4] = 0LL;
    v0[5] = 0LL;
    v0[6] = 0LL;
    v0[7] = 0LL;
    *((_DWORD *)v0 + 16) = 0;
    *((_DWORD *)v0 + 17) = 1;
    *((_DWORD *)v0 + 18) = 72;
  }
  else
  {
    v0 = 0LL;
  }
  ThreadPool = (struct CAudioThreadPool *)v0;
  if ( v0 )
    return CAudioThreadPool::Initialize(v1);
  else
    return 2147942414LL;
}
