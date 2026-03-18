/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x18024E9D4
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18019C10C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x18024EAE0 (--_ECSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceManager::~CSurfaceManager(CSurfaceManager *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rbx
  PVOID v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 24);
  qword_1803403A0 = 0LL;
  qword_18033CC18 = 0LL;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  while ( 1 )
  {
    RestartKey = 0LL;
    v2 = RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    if ( !v2 )
      break;
    if ( !RtlDeleteElementGenericTable(v1, v2) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
