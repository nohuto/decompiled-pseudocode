/*
 * XREFs of ?MidManipulationUpdateTypeToString@InputTraceLogging@@CAPEBDW4MidManipulationUpdateType@@@Z @ 0x180236F04
 * Callers:
 *     ?RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8E80 (-RailsUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@.c)
 *     ??$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A8EF8 (--$InteractionConfigurationUpdate@UDwmTouchpadInteractionConfigurationPrimitive@@@GestureTargeti.c)
 *     ?InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z @ 0x1800A9EA0 (-InteractionUpdate@GestureTargeting@InputTraceLogging@@SAXPEBU0CManipulationManager@@@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800A9F34 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ??$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800AA120 (--$InteractionConfigurationUpdate@UDwmMouseInteractionConfigurationPrimitive@@@GestureTargeting@.c)
 *     ??$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x1800ACC70 (--$InteractionConfigurationUpdate@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTarge.c)
 *     ?TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239B84 (-TemporaryInteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionU.c)
 *     ?UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x180239EC0 (-UpdateCapture@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::MidManipulationUpdateTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "CaptureContact";
    if ( !a1 )
      return "InteractionAddition";
    v1 = a1 - 1;
    if ( !v1 )
      return "InteractionRemoval";
    v2 = v1 - 1;
    if ( !v2 )
      return "VisualAddition";
    v3 = v2 - 1;
    if ( !v3 )
      return "VisualRemoval";
    if ( v3 == 1 )
      return "VisualProperty";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "CaptureManipulation";
  v6 = v5 - 1;
  if ( !v6 )
    return "InteractionConfig";
  v7 = v6 - 1;
  if ( !v7 )
    return "InteractionTempConfig";
  if ( v7 != 1 )
    return "UNKNOWN";
  return "InteractionRails";
}
