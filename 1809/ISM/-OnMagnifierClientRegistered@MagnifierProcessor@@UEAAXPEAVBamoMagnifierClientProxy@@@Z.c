/*
 * XREFs of ?OnMagnifierClientRegistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x1800CF050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MagnifierProcessor::OnMagnifierClientRegistered(
        MagnifierProcessor *this,
        struct BamoMagnifierClientProxy *a2)
{
  struct BamoMagnifierClientProxy *v4; // rcx

  v4 = (struct BamoMagnifierClientProxy *)*((_QWORD *)this + 2);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (**(void (__fastcall ***)(struct BamoMagnifierClientProxy *))a2)(a2);
      v4 = (struct BamoMagnifierClientProxy *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct BamoMagnifierClientProxy *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
