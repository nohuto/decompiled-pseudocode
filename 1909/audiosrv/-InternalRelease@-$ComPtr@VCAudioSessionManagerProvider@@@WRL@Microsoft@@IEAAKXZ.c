/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180064208
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18005E4FC (--$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAud.c)
 *     ??1?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D87E0 (--1-$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800D8BAC (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  }
  return result;
}
