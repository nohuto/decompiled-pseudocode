/*
 * XREFs of ?Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02AEC40
 * Callers:
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02AEB70 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CBackTraceBucket::Remove(
        const struct NSInstrumentation::CBackTraceStorageUnit **this,
        const struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  const struct NSInstrumentation::CBackTraceStorageUnit *v3; // rax
  const struct NSInstrumentation::CBackTraceStorageUnit *v4; // rcx
  const struct NSInstrumentation::CBackTraceStorageUnit *v5; // r9
  const struct NSInstrumentation::CBackTraceStorageUnit *v6; // r11
  const struct NSInstrumentation::CBackTraceStorageUnit *v7; // r10
  const struct NSInstrumentation::CBackTraceStorageUnit *v10; // rax

  v3 = 0LL;
  v4 = *this;
  if ( !v4 )
    return 0;
  do
  {
    v5 = v4;
    v6 = v3;
    v7 = v4;
    if ( v4 == a2 )
      break;
    v3 = v4;
    v4 = *(const struct NSInstrumentation::CBackTraceStorageUnit **)v4;
  }
  while ( v4 );
  if ( v7 == a2 )
    v5 = v6;
  if ( !v4 )
    return 0;
  if ( (*((_DWORD *)v4 + 44))-- == 1 )
  {
    v10 = *(const struct NSInstrumentation::CBackTraceStorageUnit **)v4;
    if ( v4 == *this )
      *this = v10;
    else
      *(_QWORD *)v5 = v10;
    ExFreePoolWithTag(v4, 0);
  }
  return 1;
}
