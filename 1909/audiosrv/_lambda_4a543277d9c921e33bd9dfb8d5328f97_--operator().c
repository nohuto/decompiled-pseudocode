/*
 * XREFs of _lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator() @ 0x1800DCE84
 * Callers:
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1800E1760 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 */

void ***__fastcall lambda_4a543277d9c921e33bd9dfb8d5328f97_::operator()(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void ***result; // rax
  void *v5; // rcx

  v2 = ***(void ****)a1;
  if ( v2 )
  {
    operator delete(v2);
    ***(_QWORD ***)a1 = 0LL;
  }
  v3 = ***(void ****)(a1 + 8);
  if ( v3 )
  {
    operator delete(v3);
    ***(_QWORD ***)(a1 + 8) = 0LL;
  }
  result = *(void ****)(a1 + 16);
  if ( *result )
  {
    v5 = **result;
    if ( v5 )
    {
      operator delete(v5);
      result = *(void ****)(a1 + 16);
      **result = 0LL;
    }
  }
  return result;
}
