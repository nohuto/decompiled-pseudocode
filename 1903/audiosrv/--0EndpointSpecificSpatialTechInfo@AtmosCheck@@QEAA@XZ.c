/*
 * XREFs of ??0EndpointSpecificSpatialTechInfo@AtmosCheck@@QEAA@XZ @ 0x180061E24
 * Callers:
 *     ??$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA?AV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@_K@Z @ 0x180053B18 (--$make_unique_nothrow@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wil@@YA-AV-$unique_p.c)
 * Callees:
 *     <none>
 */

AtmosCheck::EndpointSpecificSpatialTechInfo *__fastcall AtmosCheck::EndpointSpecificSpatialTechInfo::EndpointSpecificSpatialTechInfo(
        AtmosCheck::EndpointSpecificSpatialTechInfo *this)
{
  AtmosCheck::EndpointSpecificSpatialTechInfo *result; // rax

  *(_WORD *)this = 1;
  *((_BYTE *)this + 2) = 0;
  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_DWORD *)this + 1) = -2147023728;
  *((_DWORD *)this + 4) = -1879048208;
  return result;
}
