/*
 * XREFs of ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18009A360
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18009A3F4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::CreateResource(__int64 a1, unsigned int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v4; // rsi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v12; // ecx
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v13 = 0;
  if ( (unsigned int)v4 >= 0x29 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xC3Eu);
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, 0x2B3u);
  }
  else
  {
    v8 = CHandleTable::CreateOrAddRefOnChannel(a1 + 16, a1, dword_1802B0150[v4], &v13);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2B4u);
  }
  *a3 = v13;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
