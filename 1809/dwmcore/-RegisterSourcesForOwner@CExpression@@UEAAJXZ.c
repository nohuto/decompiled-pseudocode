/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800C8630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x1800CA18C (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(__int64 this)
{
  struct CBaseExpression *v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 v4; // r9
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // esi

  v1 = *(struct CBaseExpression **)(this + 400);
  v2 = this;
  if ( !v1 )
    v1 = (struct CBaseExpression *)this;
  v3 = 0LL;
  if ( !*(_DWORD *)(this + 392) )
    return 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v2 + 384);
    v5 = *(_DWORD *)(v4 + 24 * v3 + 20);
    if ( v5 >= *(_DWORD *)(v2 + 376) )
      break;
    this = v5;
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 368) + 8LL * v5);
    if ( !v6 )
      goto LABEL_9;
    this = *(_QWORD *)(v6 + 16);
    if ( !this )
      goto LABEL_9;
    v7 = CResource::AddSourceAnimation((CResource *)this, v1, *(_DWORD *)(v4 + 24 * v3));
    v8 = v7;
    if ( v7 >= 0 )
    {
      *(_BYTE *)(v2 + 408) |= 2u;
LABEL_9:
      v8 = 0;
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v7, 0x1B1u);
LABEL_10:
    v9 = v8;
    if ( v8 < 0 )
      goto LABEL_16;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= *(_DWORD *)(v2 + 392) )
      return 0;
  }
  v8 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, -2147024809, 0x1A8u);
  v9 = -2147024809;
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v8, 0x184u);
  return v9;
}
