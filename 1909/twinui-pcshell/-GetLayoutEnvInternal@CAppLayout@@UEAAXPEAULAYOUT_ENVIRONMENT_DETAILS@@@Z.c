/*
 * XREFs of ?GetLayoutEnvInternal@CAppLayout@@UEAAXPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180088C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayout::GetLayoutEnvInternal(CAppLayout *this, struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  *(_OWORD *)a2 = *((_OWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 8);
}
