/*
 * XREFs of ACPIInitRemovePowerNodes @ 0x1C00563C4
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C002C91C (ACPIBuildDevicePowerNodes.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 */

_QWORD *__fastcall ACPIInitRemovePowerNodes(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdx
  _QWORD *result; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  volatile signed __int32 **v10; // rdi
  __int64 v11; // rsi
  volatile signed __int32 *v12; // rcx

  v2 = 0LL;
  do
  {
    v3 = *(_QWORD *)(a1 + 8 * v2 + 360);
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 40);
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 )
        goto LABEL_18;
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 != v4 )
        goto LABEL_18;
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)(a1 + 8 * v2 + 360) = 0LL;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 <= 4 );
  result = *(_QWORD **)(a1 + 400);
  if ( result )
  {
    result += 5;
    v8 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v9 = (_QWORD *)result[1], (_QWORD *)*v9 != result) )
LABEL_18:
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(a1 + 400) = 0LL;
  }
  v10 = (volatile signed __int32 **)(a1 + 408);
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      result = (_QWORD *)AMLIDereferenceHandleEx(*v10);
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = *(volatile signed __int32 **)(a1 + 448);
  if ( v12 )
  {
    result = (_QWORD *)AMLIDereferenceHandleEx(v12);
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  return result;
}
