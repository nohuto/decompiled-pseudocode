/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x1401393E0
 * Callers:
 *     PnpIsRangeWithin @ 0x14072DC3C (PnpIsRangeWithin.c)
 *     PnpCmResourcesToIoResources @ 0x14072FEF4 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x14073FB40 (PnpFilterResourceRequirementsList.c)
 *     IopGenericUnpackResource @ 0x140828AA0 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x140834348 (PnprAddMemoryResources.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG Length; // r8
  USHORT Flags; // ax

  Length = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Generic.Length;
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return Length;
}
