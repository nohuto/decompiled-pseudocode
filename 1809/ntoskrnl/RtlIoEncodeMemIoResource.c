/*
 * XREFs of RtlIoEncodeMemIoResource @ 0x14018C5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlIoEncodeMemIoResource(
        PIO_RESOURCE_DESCRIPTOR Descriptor,
        UCHAR Type,
        ULONGLONG Length,
        ULONGLONG Alignment,
        ULONGLONG MinimumAddress,
        ULONGLONG MaximumAddress)
{
  USHORT v6; // dx
  ULONGLONG v8; // r10
  ULONGLONG v9; // r8
  __int64 j; // rax
  ULONGLONG v11; // rax
  __int16 v12; // ax
  __int64 i; // rax
  ULONGLONG v14; // rax
  ULONGLONG v15; // rax
  ULONGLONG v16; // rax

  if ( ((Type - 3) & 0xFB) != 0 )
  {
    if ( Type != 1 )
      return -1073741811;
    goto LABEL_10;
  }
  if ( Type == 1 )
  {
LABEL_10:
    if ( Length <= 0xFFFFFFFF && Alignment <= 0xFFFFFFFF )
      goto LABEL_3;
    return -1073741811;
  }
LABEL_3:
  *(_OWORD *)&Descriptor->u.BusNumber.MaxBusNumber = __PAIR128__(MaximumAddress, MinimumAddress);
  if ( Type == 1 )
  {
    Descriptor->Type = 1;
    goto LABEL_7;
  }
  v6 = Descriptor->Flags & 0xF1FF;
  Descriptor->Flags = v6;
  if ( Length <= 0xFFFFFFFF && Alignment <= 0xFFFFFFFF )
  {
    Descriptor->Type = 3;
LABEL_7:
    Descriptor->u.Port.Length = Length;
    Descriptor->u.Port.Alignment = Alignment;
    return 0;
  }
  if ( Length > 0xFFFFFFFF00LL )
  {
    if ( Length > 0xFFFFFFFF0000LL )
    {
      if ( Length <= 0xFFFFFFFF00000000uLL )
      {
        v8 = HIDWORD(Length);
        if ( Length == HIDWORD(Length) << 32 && Alignment <= 0xFFFFFFFF00000000uLL )
        {
          v9 = HIDWORD(Alignment);
          v15 = HIDWORD(Alignment);
          while ( Alignment != v15 << 32 )
          {
            v16 = Alignment;
            Alignment *= 2LL;
            if ( Alignment < v16 )
              return -1073741823;
            v15 = HIDWORD(Alignment);
            v9 = HIDWORD(Alignment);
          }
          v12 = 2048;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v8 = Length >> 16;
      if ( Length == (unsigned __int64)(unsigned int)(Length >> 16) << 16 && Alignment <= 0xFFFFFFFF0000LL )
      {
        v9 = Alignment >> 16;
        for ( i = (unsigned int)(Alignment >> 16); Alignment != i << 16; i = (unsigned int)v9 )
        {
          v14 = Alignment;
          Alignment *= 2LL;
          if ( Alignment < v14 )
            return -1073741823;
          LODWORD(v9) = Alignment >> 16;
        }
        v12 = 1024;
        goto LABEL_22;
      }
    }
  }
  else
  {
    v8 = Length >> 8;
    if ( Length == (unsigned __int64)(unsigned int)(Length >> 8) << 8 && Alignment <= 0xFFFFFFFF00LL )
    {
      v9 = Alignment >> 8;
      for ( j = (unsigned int)(Alignment >> 8); Alignment != j << 8; j = (unsigned int)v9 )
      {
        v11 = Alignment;
        Alignment *= 2LL;
        if ( Alignment < v11 )
          return -1073741823;
        LODWORD(v9) = Alignment >> 8;
      }
      v12 = 512;
LABEL_22:
      Descriptor->Type = 7;
      Descriptor->Flags = v12 | v6;
      Descriptor->u.Port.Length = v8;
      Descriptor->u.Port.Alignment = v9;
      return 0;
    }
  }
  return -1073741823;
}
