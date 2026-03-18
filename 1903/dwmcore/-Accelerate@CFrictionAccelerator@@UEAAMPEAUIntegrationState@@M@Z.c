/*
 * XREFs of ?Accelerate@CFrictionAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x1800DB150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CFrictionAccelerator::Accelerate(CFrictionAccelerator *this, struct IntegrationState *a2, float a3)
{
  return *((float *)a2 + 2) * *((float *)this + 6);
}
