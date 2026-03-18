/*
 * XREFs of ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x1801AA2F4
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A9E80 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector3Property(CNaturalAnimation *this, int a2, const struct D2DVector3 *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // ecx

  v3 = 0;
  switch ( a2 )
  {
    case '%':
      *((_QWORD *)this + 39) = *(_QWORD *)a3;
      v6 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 540) |= 0x20u;
      *((_DWORD *)this + 80) = v6;
      break;
    case ')':
      *((_QWORD *)this + 36) = *(_QWORD *)a3;
      v5 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 540) |= 0x10u;
      *((_DWORD *)this + 74) = v5;
      break;
    case '-':
      *(_QWORD *)((char *)this + 324) = *(_QWORD *)a3;
      *((_DWORD *)this + 83) = *((_DWORD *)a3 + 2);
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x41Cu);
      break;
  }
  return v3;
}
